#include <iostream>
#include "Graph.hpp"

void	promptInput(std::string message)
{
	std::cout << message;
}

void	storeFloat(float &value)
{
	std::cin >> value;
}

void	promptStoreVector2(Vector2 &inputPoint)
{
	promptInput("Enter y value for Point #1: ");
	storeFloat(inputPoint.y);
	promptInput("Enter x value for Point #1: ");
	storeFloat(inputPoint.x);
}


int	main() {
	std::cout
		<< "Welcome to Early Graph Tests!"
		<< std::endl
		<< std::endl;

	Vector2	size_input;

	promptInput("Enter Y: ");
	storeFloat(size_input.y);

	std::cout << std::endl;

	promptInput("Enter X: ");
	storeFloat(size_input.x);

	Graph	graphA(size_input);

	std::cout
		<< "This is the size of Graph A: y-axis = "
		<< graphA.getSize().y
		<< " AND x-axis = "
		<< graphA.getSize().x
		<< std::endl;

	Vector2 inputPoint;

	promptStoreVector2(inputPoint);

	graphA.addPoint(inputPoint);

	graphA.print();

	return 0;
}
