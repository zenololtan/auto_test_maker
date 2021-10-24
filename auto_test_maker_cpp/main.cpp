#include "Fixed.hpp"
#include <iomanip>

#define YELLOW  "\033[33m"      /* Yellow */
#define RESET   "\033[0m"

void	SmallerThen(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "SmallerThen operator" << RESET << std::endl;
	std::cout << "Testcase int: (" << int_a << " < " << int_b << "):";
	std::cout << std::boolalpha << (int_a<int_b) << std::endl;
	std::cout << "Testcase float: (" << float_a << " < " << float_b << "):";
	std::cout << std::boolalpha << (float_a<float_b) << std::endl;
	std::cout << "Testcase mix: (" << int_a << " < " << float_b << "):";
	std::cout << std::boolalpha << (int_a<float_b) << std::endl;
}

void	BiggerThen(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "BiggerThen operator" << RESET << std::endl;
	std::cout << "Testcase int: (" << int_a << " > " << int_b << "):";
	std::cout << std::boolalpha << (int_a>int_b) << std::endl;
	std::cout << "Testcase float: (" << float_a << " > " << float_b << "):";
	std::cout << std::boolalpha << (float_a>float_b) << std::endl;
	std::cout << "Testcase mix: (" << int_a << " > " << float_b << "):";
	std::cout << std::boolalpha << (int_a>float_b) << std::endl;
}

void	SmallerThenEquals(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "SmallerThenEquals operator" << RESET << std::endl;
	std::cout << "Testcase int: (" << int_a << " >= " << int_b << "):";
	std::cout << std::boolalpha << (int_a>=int_b) << std::endl;
	Fixed copy_int(int_a);
	std::cout << "Testcase Equal " << int_a << ">=" << copy_int<< ":";
	std::cout << std::boolalpha << (int_a>=copy_int) << std::endl;
	std::cout << "Testcase float: (" << float_a << " >= " << float_b << "):";
	std::cout << std::boolalpha << (float_a>=float_b) << std::endl;
	Fixed copy_float(float_a);
	std::cout << "Testcase Equal " << float_a << ">=" << copy_float<< ":";
	std::cout << std::boolalpha << (float_a>=copy_float) << std::endl;
	std::cout << "Testcase mix: (" << int_a << " >= " << float_b << "):";
	std::cout << std::boolalpha << (int_a>=float_b) << std::endl;
}

void	BiggerThenEquals(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "BiggerThenEquals operator" << RESET << std::endl;
	std::cout << "Testcase int: (" << int_a << " <= " << int_b << "):";
	std::cout << std::boolalpha << (int_a<=int_b) << std::endl;
	Fixed copy_int(int_a);
	std::cout << "Testcase Equal " << int_a << "<=" << copy_int<< ":";
	std::cout << std::boolalpha << (int_a<=copy_int) << std::endl;
	std::cout << "Testcase float: (" << float_a << " <= " << float_b << "):";
	std::cout << std::boolalpha << (float_a<=float_b) << std::endl;
	Fixed copy_float(float_a);
	std::cout << "Testcase Equal " << float_a << "<=" << copy_float<< ":";
	std::cout << std::boolalpha << (float_a<=copy_float) << std::endl;
	std::cout << "Testcase mix: (" << int_a << " <= " << float_b << "):";
	std::cout << std::boolalpha << (int_a<=float_b) << std::endl;
}

void	Equals(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "Equals operator" << RESET << std::endl;
	std::cout << "Testcase int: (" << int_a << " == " << int_b << "):";
	std::cout << std::boolalpha << (int_a==int_b) << std::endl;
	Fixed copy_int(int_a);
	std::cout << "Testcase Equal " << int_a << "==" << copy_int<< ":";
	std::cout << std::boolalpha << (int_a==copy_int) << std::endl;
	std::cout << "Testcase float: (" << float_a << " == " << float_b << "):";
	std::cout << std::boolalpha << (float_a==float_b) << std::endl;
	Fixed copy_float(float_a);
	std::cout << "Testcase Equal " << float_a << "==" << copy_float<< ":";
	std::cout << std::boolalpha << (float_a==copy_float) << std::endl;
	std::cout << "Testcase mix: (" << int_a << " == " << float_b << "):";
	std::cout << std::boolalpha << (int_a==float_b) << std::endl;
}

void	NotEquals(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "NotEquals operator" << RESET << std::endl;
	std::cout << "Testcase int: (" << int_a << " != " << int_b << "):";
	std::cout << std::boolalpha << (int_a!=int_b) << std::endl;
	Fixed copy_int(int_a);
	std::cout << "Testcase Equal " << int_a << "!=" << copy_int<< ":";
	std::cout << std::boolalpha << (int_a!=copy_int) << std::endl;
	std::cout << "Testcase float: (" << float_a << " != " << float_b << "):";
	std::cout << std::boolalpha << (float_a!=float_b) << std::endl;
	Fixed copy_float(float_a);
	std::cout << "Testcase Equal " << float_a << "!=" << copy_float<< ":";
	std::cout << std::boolalpha << (float_a!=copy_float) << std::endl;
	std::cout << "Testcase mix: (" << int_a << " != " << float_b << "):";
	std::cout << std::boolalpha << (int_a!=float_b) << std::endl;
}

void	Plus(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "Plus operator" << RESET << std::endl;
	std::cout << "Testcase int: (" << int_a << " + " << int_b << "):";
	std::cout << (int_a+int_b) << std::endl;
	std::cout << "Testcase float: (" << float_a << " + " << float_b << "):";
	std::cout << (float_a+float_b) << std::endl;
	std::cout << "Testcase mix: (" << int_a << " + " << float_b << "):";
	std::cout << (int_a+float_b) << std::endl;
}

void	Minus(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "Minus operator" << RESET << std::endl;
	std::cout << "Testcase int: (" << int_a << " - " << int_b << "):";
	std::cout << (int_a-int_b) << std::endl;
	std::cout << "Testcase float: (" << float_a << " - " << float_b << "):";
	std::cout << (float_a-float_b) << std::endl;
	std::cout << "Testcase mix: (" << int_a << " - " << float_b << "):";
	std::cout << (int_a-float_b) << std::endl;
}

void	Multiply(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "Multiply operator" << RESET << std::endl;
	std::cout << "Testcase int: (" << int_a << " * " << int_b << "):";
	std::cout << (int_a*int_b) << std::endl;
	std::cout << "Testcase float: (" << float_a << " * " << float_b << "):";
	std::cout << (float_a*float_b) << std::endl;
	std::cout << "Testcase mix: (" << int_a << " * " << float_b << "):";
	std::cout << (int_a*float_b) << std::endl;
}

void	Divide(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "Divide operator" << RESET << std::endl;
	std::cout << "Testcase int: (" << int_a << " / " << int_b << "):";
	std::cout << (int_a/int_b) << std::endl;
	std::cout << "Testcase float: (" << float_a << " / " << float_b << "):";
	std::cout << (float_a/float_b) << std::endl;
	std::cout << "Testcase mix: (" << int_a << " / " << float_b << "):";
	std::cout << (int_a/float_b) << std::endl;
}

void	PreIncrement(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "PreIncrement operator" << RESET << std::endl;
	std::cout << "Testcase int: int" << "++" << (int_a++) << std::endl;
	std::cout << "Testcase float: float" << "++" << (float_a++) << std::endl;
}

void	PreDecrement(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "PreDecrement operator" << RESET << std::endl;
	std::cout << "Testcase int: int" << "--" << (int_a--) << std::endl;
	std::cout << "Testcase float: float" << "--" << (float_a--) << std::endl;
}

void	PostIncrement(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "PostIncrement operator" << RESET << std::endl;
	std::cout << "Testcase int: " << "++" << int_a << ": " << (++int_a) << std::endl;
	std::cout << "Testcase float: " << "++" << float_a << ": " << (++float_a) << std::endl;
}

void	PostDecrement(){
	Fixed int_a(1);
	Fixed int_b(3);
	Fixed float_a(1.05f);
	Fixed float_b(2.09f);
	std::cout << YELLOW << "PostDecrement operator" << RESET << std::endl;
	std::cout << "Testcase int: " << "--" << int_a << ": " << (--int_a) << std::endl;
	std::cout << "Testcase float: " << "--" << float_a << ": " << (--float_a) << std::endl;
}

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "TEST CASES" << std::endl;
	SmallerThen();
	BiggerThen();
	SmallerThenEquals();
	BiggerThenEquals();
	Equals();
	NotEquals();
	Plus();
	Minus();
	Multiply();
	Divide();
	PreIncrement();
	PreDecrement();
	PostIncrement();
	PostDecrement();
	return 0;
}
