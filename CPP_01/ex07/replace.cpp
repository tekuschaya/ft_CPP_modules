#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Incorrect number of arguments" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream old_file(filename);
	if (!old_file.is_open())
	{
		std::cerr << "File cannot be opened" << std::endl;
		return 1;
	}
	std::ofstream new_file(filename.append(".replace"));
	if (!new_file.is_open())
	{
		std::cerr << "File cannot be created or opened" << std::endl;
		old_file.close();
		return 1;
	}
	std::string buf;
	int start;
	while (std::getline(old_file, buf))
	{
		while ((start = buf.find(s1)) >= 0)
			buf.replace(start, s1.length(), s2);
		if (!old_file.eof())
			new_file << buf << std::endl;
		else
			new_file << buf;
	}
	old_file.close();
	new_file.close();
	return 0;
}