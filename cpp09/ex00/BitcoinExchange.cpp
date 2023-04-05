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
    m_data     = other.m_data;
    m_filename = other.m_filename;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        m_data     = other.m_data;
        m_filename = other.m_filename;
    }
    return *this;
}

void BitcoinExchange::checkPrice(const std::string &date, const float &price)
{
    if (m_data.find(date) != m_data.end())
    {
        std::cout << date << " => " << price << " = " << m_data[date]
                  << std::endl;
        return;
    }
    std::map<std::string, std::string>::iterator it =
        this->m_data.lower_bound(date);
    if (it != this->m_data.begin())
        it--;
    std::cout << date << " => " << price << " = "
              << atof(it->second.c_str()) * price << std::endl;
}

static std::string &rtrim(std::string &s, const char *t)
{
    s.erase(s.find_last_not_of(t) + 1);
    return s;
}

static std::string &ltrim(std::string &s, const char *t)
{
    s.erase(0, s.find_first_not_of(t));
    return s;
}

static std::string &trim(std::string &s, const char *t)
{
    return ltrim(rtrim(s, t), t);
}

static bool isDate(const std::string &date)
{
    int year, month, day;

    if (date.length() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;

    year  = atoi(date.substr(0, 4).c_str());
    month = atoi(date.substr(5, 2).c_str());
    day   = atoi(date.substr(8, 2).c_str());

    struct tm tm;
    memset(&tm, 0, sizeof(struct tm));
    tm.tm_year = year - 1900;
    tm.tm_mon  = month - 1;
    tm.tm_mday = day;

    time_t t = mktime(&tm);

    if (t == -1)
        return false;

    return tm.tm_mday == day && tm.tm_mon == month - 1 &&
           tm.tm_year == year - 1900;
}

void BitcoinExchange::checkPrices()
{
    std::ifstream file(this->m_filename.c_str(), std::ifstream::in);

    char       *p;
    float       fprice;
    std::string line;
    std::getline(file, line);
    const char *spaces = " \t\n\r\f\v";

    while (std::getline(file, line))
    {
        std::string date  = line.substr(0, line.find('|'));
        std::string price = line.substr(line.find('|') + 1, line.length());

        date  = trim(date, spaces);
        price = trim(price, spaces);

        if (!isDate(date))
        {
            std::cout << "Error: bad date => " << date << std::endl;
            continue;
        }

        fprice = atof(price.c_str());

        strtod(price.c_str(), &p);
        if (fprice < 0)
        {
            std::cout << "Error: not a positive number" << std::endl;
            continue;
        }
        else if (fprice > 10000)
        {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }
        else if (*p != '\0')
        {
            std::cout << "Error: bad input => " << price << std::endl;
            continue;
        }
        checkPrice(date, fprice);
    }
    file.close();
}

void BitcoinExchange::load()
{
    std::ifstream file(this->m_database.c_str(), std::ifstream::in);

    std::string line;

    char *p;

    std::getline(file, line);

    while (std::getline(file, line))
    {
        std::string date  = line.substr(0, line.find(','));
        std::string price = line.substr(line.find(',') + 1, line.length());
        // check if price is a float

        strtod(price.c_str(), &p);
        if (atof(price.c_str()) >= 0 && *p == '\0')
            m_data[date] = price;
        else
        {
            std::cout << "Invalid argument: " << price.c_str() << std::endl;
            exit(1);
        }
    }
    file.close();
}
