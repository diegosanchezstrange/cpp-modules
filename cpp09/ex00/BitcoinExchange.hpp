#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <stdlib.h>
#include <string>

class BitcoinExchange {
public:
  BitcoinExchange();
  BitcoinExchange(const std::string &filename);
  BitcoinExchange(const BitcoinExchange &other);
  ~BitcoinExchange();
  BitcoinExchange &operator=(const BitcoinExchange &other);

  void checkPrice(const std::string &datem, const float &price);

  void checkPrices();

  void load();

private:
  std::map<std::string, std::string> m_data;
  std::string m_database;
  std::string m_filename;
};

#endif // !BITCOIN_EXCHANGE_HPP
