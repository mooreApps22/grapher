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

bool	Graph::_containsPoint(int y, int x) const
{
	for (std::vector<Vector2>::const_iterator it = _points.begin();
		it != _points.end();
		++it)
	{
		int pointY = static_cast<int>(it->y + 0.5f);
		int pointX = static_cast<int>(it->x + 0.5f);

		if (pointY == y && pointX == x)
			return true;
	}
	
	return false;
}

int		Graph::_digitCount(int number) const
{
	int	digits = 1;

	while (number >= 10)
	{
		number /= 10;
		++digits;
	}
	return digits;
}

void	Graph::print() const
{
	std::ostringstream	graphStream;

	int	height = static_cast<int>(_size.y + 0.5f);
	int	width = static_cast<int>(_size.x + 0.5f);
	int yLabelWidth = _digitCount(height);
	int xCellWidth = _digitCount(width) + 1;
	
	for (int y = height; y >= 0; --y)
	{
		graphStream
			<< ">&"
			<< std::setw(yLabelWidth)
			<< y 
			<< ' ';

		for (int x = 0; x <= width; ++x)
		{
			if (_containsPoint(y, x))
				graphStream << std::setw(xCellWidth) << "X";
			else
				graphStream << std::setw(xCellWidth) << ".";
		}

		graphStream << '\n';
	}

	graphStream
		<< ">&"
		<< std::setw(yLabelWidth + 1)
		<< ' ';

	for (int x = 0; x <= width; ++x)
		graphStream << std::setw(xCellWidth) << x;

	graphStream << '\n';

	std::cout << graphStream.str();
}
