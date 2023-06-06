#include "Node.h"

Node::Node() {}

Node::Node(Vector2f pos) {
	Vector2f size = Vector2f(100, 100);
	this->rectangle = RectangleShape(size);

	rectangle.setPosition(pos);
	rectangle.setFillColor(Color::Green);

}
