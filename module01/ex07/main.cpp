#include "main.hpp"

int main(int ac, char **av)
{
	size_t pos;
	std::stringstream ss;
	std::stringstream ss2;
	std::ofstream fs2;
	std::string str;
	std::string str2;
	std::string *basestr;
	size_t len;

	if(ac != 4)
		return (0);
	std::ifstream fs(av[1]);
	len = std::strlen(av[2]);
	if(!fs.is_open())
		return(0);
	ss << av[1];
	ss << ".replace";
	str = ss.str();
	fs2.open(str);
	ss2 << fs.rdbuf();
	str2 = ss2.str();
	basestr = &str2;
	while (1)
	{
		pos = basestr->find(av[2]);
		if (pos != std::string::npos)
		{
			basestr->replace(pos, len, av[3]);
		}
		else
			break;
	}
	fs2 << str2;
	fs2.close();
	fs.close();
	return (1);
}