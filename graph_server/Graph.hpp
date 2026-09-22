#include "Vector2.hpp"
#include <vector>

class	Graph {
	private:
		Vector2					_size;
		std::vector<Vector2>	_points;

		void	_handleNewPoint(const Vector2 &point);
	
	public:
		Graph();
		~Graph();

		void	addPoint(const	Vector2 &point);
		void	clear();

		bool	loadfromFile() const;

		void	print() const;
		bool	writePNG(const	std::string &filename) const;
};
