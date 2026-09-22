#include "Vector2.hpp"
#include <vector>
#include <string>

class	Graph {
	private:
		Vector2					_size;
		std::vector<Vector2>	_points;

		void	_handleNewPoint(const Vector2 &point);
	
	public:
		Graph(Vector2 size);
		~Graph();

		void	addPoint(const	Vector2 &point);
		void	clear();

		bool	loadfromFile() const;

		void	print() const;
		bool	writePNG(const	std::string &filename) const;
};
