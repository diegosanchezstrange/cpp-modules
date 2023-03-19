#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : m_database("data.csv") {}

BitcoinExchange::BitcoinExchange(const std::string &filename)
    : m_database("data.csv")
{
    m_filename = filename;
    load();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    m_data = other.m_data;
    m_filename = other.m_filename;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        m_data = other.m_data;
        m_filename = other.m_filename;
    }
    return *this;
}

void BitcoinExchange::checkPrice(const std::string &date, const int &price)
{
    if (m_data.find(date) != m_data.end())
    {
        std::cout << date << " => " << price << " = " << m_data[date]
                  << std::endl;
        return;
    }
    std::map<std::string, std::string>::iterator it =
        this->m_data.lower_bound(date);
    if (it != this->m_data.begin() && it != this->m_data.end())
        it--;
    std::cout << it->first << " => " << price << " = " << it->second
              << std::endl;
}

void BitcoinExchange::load()
{
    std::ifstream file(this->m_database.c_str(), std::ifstream::in);

    std::string line;

    std::getline(file, line);

    while (std::getline(file, line))
    {
        std::string date = line.substr(0, line.find(','));
        std::string price = line.substr(line.find(',') + 1, line.length());

        // std::cout << date << " " << price << std::endl;
        m_data[date] = price;
    }
    file.close();
}
