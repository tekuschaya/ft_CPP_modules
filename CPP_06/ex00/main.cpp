#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error. Incorrect number of argument" << std::endl;
		return 0;
	}
	try
	{
		Convert test(argv[1]);
		test.convertToChar();
		test.convertToInt();
		test.convertToFloat();
		test.convertToDouble();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error. The conversion is impossible" << std::endl;
	}
	return 0;
}