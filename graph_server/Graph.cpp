#include "Graph.hpp"

Graph::Graph(Vector2 size)
	:	_size(size)
{
}

Graph::~Graph()
{
}

void	Graph::addPoint(const Vector2 &point)
{
	if (point.x < 0 || point.y < 0)
		return ;

	if (point.x > _size.x || point.y > _size.y)
		return ;

	_points.push_back(point);
}


const Vector2	Graph::getSize() const
{
	return _size;
}

void	Graph::print() const
{
	std::ostringstream	graphStream;

	int	height = static_cast<int>(_size.y + 0.5f);
	int	width = static_cast<int>(_size.x + 0.5f);
	
	for (int y = height; y >= 0; --y)
	{
		graphStream << ">&" << y;

		for (int x = 0; x <= width; ++x)
		{
			graphStream << ". ";
		}

		graphStream << '\n';
	}

	graphStream << ">& ";

	for (int x = 0; x <= width; ++x)
		graphStream << x << ' ';
	graphStream << '\n';

	std::cout << graphStream.str();
}
