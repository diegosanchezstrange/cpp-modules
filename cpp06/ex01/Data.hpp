#ifndef DATA_HPP
#define DATA_HPP

class Data
{
	public:
		int	x;

		Data(int x)
		{
			this->x = x;
		}
        ~Data() {};
        Data(const Data &o) { this->x = o.x; };
        Data &operator=(const Data &o) 
        {
            if (this == &o)
                return (*this);
            this->x = o.x;
            return (*this);
        };
};

#endif // !DATA_HPP

