#include "Data.hpp"

void * serialize(void)
{
	srand(time(NULL));
	std::string ptr;
	char c;
	int i = 0;
	while (i < 8)
	{
		c = rand()%123;
		if (isalnum(c))
		{
			ptr = ptr + c;
			i++;
		}
	}
	ptr = ptr + static_cast<std::ostringstream*>(&(std::ostringstream() << rand()))->str();
	i = 0;
	while (i < 8)
	{
		c = rand()%123;
		if (isalnum(c))
		{
			ptr = ptr + c;
			i++;
		}
	}
	std::cout << ptr << std::endl;
	void *result =  static_cast<void*>(new std::string(ptr));
	return (result);
}

Data * deserialize(void * raw)
{
	Data* d = new Data();
	std::string *str = reinterpret_cast<std::string*>(raw);
	d->s1 = str->substr(0, 8);
	d->n = atoi(str->substr(8, str->length() - 8).c_str());
	d->s2 = str->substr(str->length() - 8, str->length());
	delete (str);
	return (d);
}

int	main()
{
	void *lol = serialize();
	std::cout << lol << std::endl;
	Data *d = deserialize(lol);
	std::cout << "s1 : " << d->s1 << std::endl;
	std::cout << "n : " << d->n << std::endl;
	std::cout << "s2 : " << d->s2 << std::endl;
	delete (d);
	return(0);
}