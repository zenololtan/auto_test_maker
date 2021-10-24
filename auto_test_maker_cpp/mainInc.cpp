int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
//	std::cout << Fixed::max( a, b ) << std::endl;
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
