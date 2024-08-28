#pragma once

#include "Pathfinding.h"
#include <string>

class NodeMap
{
	int m_width, m_height;
	float m_cellSize;

	Node** m_nodes;

public:
	void Intialise(std::vector<std::string> asciiMap, int cellSize);

	Node* GetNode(int x, int y) { return m_nodes[x + m_width * y]; }

	void Draw();
};

