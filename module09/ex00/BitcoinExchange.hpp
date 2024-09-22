
#pragma once

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#define DB_PATH "./data.csv"

class BitcoinExchange
{
	private:
		std::map<std::string, float> _database;
		void initDB();
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange &toCopy);
		float findRate(const std::string &date);
		void parseFile(std::ifstream &file);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &toCopy);
};
