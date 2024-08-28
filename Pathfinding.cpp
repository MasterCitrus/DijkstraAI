#include "Pathfinding.h"
#include <string>

Node::Node(float x, float y) : position{ x, y }
{
}

void Node::ConnectTo(Node* other, float cost)
{
	connections.push_back(Edge(other, cost));
}

bool Node::Compare(Node* a, Node* b)
{
	if (a->gScore > b->gScore) return true;
	else return false;
}
