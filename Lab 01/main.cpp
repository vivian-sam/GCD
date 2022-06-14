// Student number: 40785157 UBC
// Name: Vivian Sam

#include "gcd.h";
#include <iostream>;

int main()
{
	int a;
	int b;

	std::cout << "Input the first number" << std::endl;
	std::cin >> a;

	std::cout << "Input the second number" << std::endl;
	std::cin >> b;

	std::cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b);

	return 0;
}