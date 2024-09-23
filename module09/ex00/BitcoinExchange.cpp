
#include "BitcoinExchange.hpp"

void BitcoinExchange::initDB(void)
{
    std::ifstream fichier(DB_PATH);

    if (!fichier.is_open()) {
        throw std::exception();
    }
	std::string line;
    std::getline(fichier, line);
    while (std::getline(fichier, line)) {
        std::stringstream ss(line);
        std::string date;
        std::string tauxStr;
        float taux;

        std::getline(ss, date, ',');
        std::getline(ss, tauxStr);
        std::istringstream tauxStream(tauxStr);
        tauxStream >> taux;
        _database[date] = taux;
    }
    fichier.close();
}

void BitcoinExchange::parseFile(std::ifstream &file)
{
    if (!file.is_open()) {
        std::cerr << BRED << "Error" << RED << ": could not open file." << WHITE << std::endl;
        return ;
    }
	std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string date;
        std::string amountStr;
        float amount;

        if (!line.size())
            continue;
        std::getline(ss, date, '|');
        std::getline(ss, amountStr);
		if (amountStr.size() == 0)
		{
			std::cerr << BRED << "Error" << RED << ": Bad input => " << WHITE << date << WHITE << std::endl;
			continue ;
		}
		if (date.size() == 0)
		{
			std::cerr << BRED << "Error" << RED << ": Missing date" << WHITE << std::endl;
			continue ;
		}
        std::istringstream amountStream(amountStr);
        amountStream >> amount;
		if (amount < 0)
		{
			std::cerr << BRED << "Error" << RED << ": Not a positive number." << WHITE << std::endl;
			continue ;
		}
		if (amount > 1000)
		{
			std::cerr << BRED << "Error" << RED << ": Too large number." << WHITE << std::endl;
			continue ;
		}
		std::cout << date << "=> " << amount << " = " << findRate(date) * amount << std::endl;
    }
    file.close();
}

float BitcoinExchange::findRate(const std::string &date) {
    std::map<std::string, float>::const_iterator it = _database.lower_bound(date);
    if (it != _database.end() && it->first == date) {
        return it->second;
    }
    if (it == _database.begin()) {
        return -1;
    }
    --it;
    return it->second;
}

BitcoinExchange::BitcoinExchange()
{
    initDB();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange &toCopy)
{
	*this = toCopy;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &toCopy)
{
	_database = toCopy._database;
	return (*this);
}
