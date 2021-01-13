#include "Data.hpp"

void * serialize(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	char result[20];
	char c;
	int i = 0;

	while (i < 8)
	{
		c = rand()%123;
		if (isalnum(c))
		{
			result[i] =  c;
			i++;
		}
	}
	// std::cout << s1 : << result << std::endl;
	result[8] = rand();
	// std::cout << n : << static_cast<int>(result[8]) << std::endl;
	i = 12;
	while (i < 20)
	{
		c = rand()%123;
		if (isalnum(c))
		{
			result[i] =  c;
			i++;
		}
	}
	result[20] = '\0';
	// std::cout << s2 : << result + 12 << std::endl;
	// std::cout << sizeof(result) << std::endl;
	void *resul =  reinterpret_cast<void*>(result);
	return (resul);
}

Data * deserialize(void * raw)
{
	Data *d = new Data;
	d->s1 = std::string(reinterpret_cast<char *>(raw), 8);
	d->n = int(*reinterpret_cast<int *>(reinterpret_cast<char *>(raw) + 8));
	d->s2 = std::string(reinterpret_cast<char *>(raw) + 12, 8);
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