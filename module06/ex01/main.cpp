#include "Data.hpp"

void * serialize(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	Data *result = new Data();
	std::string ptr;
	std::string ptr1;
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
	result->s1 = ptr;
	std::cout << ptr << std::endl;
	result->n = rand();
	std::cout << result->n << std::endl;
	i = 0;
	while (i < 8)
	{
		c = rand()%123;
		if (isalnum(c))
		{
			ptr1 = ptr1 + c;
			i++;
		}
	}
	result->s2 = ptr1;
	std::cout << ptr1 << std::endl;
	void *resul =  static_cast<void*>(result);
	return (resul);
}

Data * deserialize(void * raw)
{
	Data *d = reinterpret_cast<Data*>(raw);
	return (d);
}

int	main()
{
	puts("---- Serialize ----\n");
	void *lol = serialize();
	Data *d = deserialize(lol);
	puts("\n---- Deserialize ----\n");
	std::cout << "s1 : " << d->s1 << std::endl;
	std::cout << "n : " << d->n << std::endl;
	std::cout << "s2 : " << d->s2 << std::endl;
	delete (d);
	return(0);
}