#include <iostream>

int	main(int argc, char	**argv)
{
	std::string str;
	int	i, j;

	i = 1;
	j = 0;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argc > i)
	{
		str = std::string(argv[i]);
		while (str.length() > j)
		{
			std::cout << (char) std::toupper(str[j]);
			j++;
		}
		j = 0;
		i++;
	}
	std::cout << std::endl;
	return (0);
}
