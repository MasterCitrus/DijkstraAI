#include "Pathfinding.h"
#include <string>

Node::Node(float x, float y) : position{ x, y }
{
}

void Node::ConnectTo(Node* other, float cost)
{
	connections.push_back(Edge(other, cost));
}
