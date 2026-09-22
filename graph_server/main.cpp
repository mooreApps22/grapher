#include <iostream>
#include "Graph.hpp"

int	main() {
	std::cout
		<< "Welcome to Early Graph Tests!"
		<< std::endl
		<< std::endl;

	Vector2	size_input;

	std::cout
		<< "Enter X: ";

	std::cin >> size_input.x;

	std::cout << std::endl;

	std::cout
		<< "Enter Y: ";

	std::cin >> size_input.y;



	Graph	graphA(size_input);

	std::cout
		<< "This is the size of Graph A: "
		<< graphA.getSize().y
		<< " & "
		<< graphA.getSize().x
		<< std::endl;

	
	return 0;
}
