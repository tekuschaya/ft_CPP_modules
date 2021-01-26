#include "whatever.hpp"

class Test
{
	private:
		std::string _name;
		int _n;
	public:
		Test(std::string name, int n): _name(name), _n(n) {}
		bool operator==(Test const &test) {return (this->_n == test._n);}
		bool operator!=(Test const &test) {return (this->_n != test._n);}
		bool operator>(Test const &test) {return (this->_n > test._n);}
		bool operator<(Test const &test) {return (this->_n < test._n);}
		bool operator>=(Test const &test) {return (this->_n >= test._n);}
		bool operator<=(Test const &test) {return (this->_n <= test._n);}
		int getValue() const {return (this->_n);}
		std::string getName() const {return (this->_name);}
};
std::ostream &operator<<(std::ostream &out, Test const &test)
{
	out << "name = " << test.getName() << " value = " << test.getValue();
	return (out);
}

int main( void ) 
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "-----------------------------------------" << std::endl;

	double d1 = 123.456;
	double d2 = 123.457;
	std::cout << "min( d1, d2 ) = " << ::min(d1, d2) << std::endl;
	std::cout << "max( d1, d2 ) = " << ::max(d1, d2) << std::endl;

	char c1 = 'A';
	char c2 = 'B';
	std::cout << "min( c1, c2 ) = " << ::min(c1, c2) << std::endl;
	std::cout << "max( c1, c2 ) = " << ::max(c1, c2) << std::endl;
	::swap(c1, c2);
	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;

	Test test1("test1", 7);
	Test test2("test2", 5);
	std::cout << "min( test1, test2 ) =   " << ::min(test1, test2) << std::endl;
	std::cout << "min( test1, test2 ) =   " << ::max(test1, test2) << std::endl;
	::swap(test1, test2);
	std::cout << test1 << std::endl << test2 << std::endl;

	std::cout << "-----------------------------------------" << std::endl;

	Test test3("test3", 3);
	Test test4("test4", 3);
	std::cout << "min( test3, test4 ) =   " << ::min(test3, test4) << std::endl;
	std::cout << "min( test3, test4 ) =   " << ::max(test3, test4) << std::endl;	

	return 0; 
}