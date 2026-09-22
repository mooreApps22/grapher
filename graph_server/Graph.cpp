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
