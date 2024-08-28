#include "raylib.h"
#include "NodeMap.h"
#include <string>
#include <vector>

int main()
{
	int screenWidth = 800;
	int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "Dijkstra's Path");

	SetTargetFPS(60);

	NodeMap map;

	std::vector<std::string> asciiMap;
	asciiMap.push_back("000000000000");
	asciiMap.push_back("010111011100");
	asciiMap.push_back("010101110110");
	asciiMap.push_back("010100000000");
	asciiMap.push_back("010111111110");
	asciiMap.push_back("010000001000");
	asciiMap.push_back("011111111110");
	asciiMap.push_back("000000000000");
	map.Intialise(asciiMap, 50);

	Node* start = map.GetNode(1, 1);
	Node* end = map.GetNode(10, 2);
	std::vector<Node*> nodeMapPath = NodeMap::DijkstraSearch(start, end);
	Color lineColour = { 255, 255, 0, 255 };

	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(BLACK);

		map.Draw(true);
		map.DrawPath(nodeMapPath, lineColour);

		EndDrawing();
	}

	CloseWindow();
}