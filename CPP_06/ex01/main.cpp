#include <iostream>

struct Data { std::string s1; int n; std::string s2; };

void *serialize(void)
{
	void *tmp = operator new(20);
	char *ptr;
	int *ptr1;
	ptr = reinterpret_cast<char *>(tmp);
	int n = rand() % 2147483647;
	std::string alfnum = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
	for (int i = 0; i < 8; i++)
		ptr[i] = alfnum[rand() % 62];
	ptr1 = reinterpret_cast<int *>(ptr + 8);
	*ptr1 = n;
	for (int i = 12; i < 20; i++)
		ptr[i] = alfnum[rand() % 62];
	return (tmp);
}

Data *deserialize(void *raw)
{
	Data *data = new Data;
	char *s = reinterpret_cast<char *>(raw);
	int *i = reinterpret_cast<int *>(s + 8);
	data->n = *i;
	data->s1 = std::string(s, 8);
	data->s2 = std::string(s + 12, 8);
	delete s;
	return (data);
}


int main()
{
	void *raw = serialize();
	Data *data = deserialize(raw);
	std::cout << "data->s1 = " << data->s1 << std::endl;
	std::cout << "data->s2 = " << data->s2 << std::endl;
	std::cout << "data->n = " << data->n << std::endl;
	delete data;
	return 0;
}