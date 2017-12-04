#include <iostream>
#include "x_values2.h"
#include <vector>

int main () {
	double a;
	double b;
	double c;
	std::cout << "Enter a number. " << std::endl;
	std::cin >> a ;
	std::cout << "Enter a number. " << std::endl;
	std::cin >> b ;
	std::cout << "Enter a number. " << std::endl;
	std::cin >> c ;

	std::cout << x_value(a, b, c) << std::endl;
	return 0;
}