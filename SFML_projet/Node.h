#include <SFML/Graphics.hpp>

using namespace sf;

class Node
{
private:
	RectangleShape rectangle;
public:
	Node();
	Node(Vector2f);

	RectangleShape GetRectangle() { return rectangle; }
};

