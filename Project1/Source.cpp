#include <iostream>

int main()
{

	double number1 = 0.0;
	double number2 = 0.0;
	double number3 = 0.0;
	double number4 = 0.0;

	std::cout << "Muffin price:" << std::endl;
	std::cin >> number1;
	std::cout << "Muffin price:" << number1 << std::endl << std::endl;

	std::cout << "Quantity of muffins sold" << std::endl;
	std::cin >> number2;
	std::cout << "Quantity of muffins sold:" << number2 << std::endl << std::endl;

	std::cout << "Donut price" << std::endl;
	std::cin >> number3;
	std::cout << "Donut price:" << number3 << std::endl << std::endl;

	std::cout << "Quantity of donuts sold" << std::endl << std::endl;
	std::cin >> number4;
	std::cout << "Quantity of donuts sold:" << number4 << std::endl << std::endl;


	double itemssold = number2 + number4;
	double muffinsales = number1 * number2;
	double donutsales = number3 * number4;
	double totalsales = muffinsales + donutsales;


	std::cout << "Total items sold:" << itemssold << std::endl;
	std::cout << "Muffin sales:$" << muffinsales << std::endl;
	std::cout << "Donut sales:$" << donutsales << std::endl;
	std::cout << "Total sales:$" << totalsales << std::endl;

	return 0;

	// Finished - Yeehaw
	// Here comes the muffin man
}