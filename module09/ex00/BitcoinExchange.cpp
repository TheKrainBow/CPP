
#include "BitcoinExchange.hpp"

void BitcoinExchange::initDB(void)
{
    std::ifstream fichier(DB_PATH);

    if (!fichier.is_open()) {
        std::cerr << "Erreur: Impossible d'ouvrir le fichier " << DB_PATH << std::endl;
        return ;
    }
	std::string ligne;
    std::getline(fichier, ligne);
    while (std::getline(fichier, ligne)) {
        std::stringstream ss(ligne);
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
        std::cerr << "Error: could not open file." << std::endl;
        return ;
    }
	std::string ligne;
    std::getline(file, ligne);
    while (std::getline(file, ligne)) {
        std::stringstream ss(ligne);
        std::string date;
        std::string amountStr;
        float amount;

        std::getline(ss, date, '|');
        std::getline(ss, amountStr);
		if (amountStr.size() == 0)
		{
			std::cerr << "Error: Bad input => " << date << std::endl;
			continue ;
		}
        std::istringstream amountStream(amountStr);
        amountStream >> amount;
		if (amount < 0)
		{
			std::cerr << "Error: not a positive number." << std::endl;
			continue ;
		}
		if (amount > 1000)
		{
			std::cerr << "Error: too large number." << std::endl;
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
