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

	std::vector<std::string> asciiMap;
	asciiMap.push_back("000000000000");
	asciiMap.push_back("010111011100");
	asciiMap.push_back("010101110110");
	asciiMap.push_back("010100000000");
	asciiMap.push_back("010111111110");
	asciiMap.push_back("010000001000");
	asciiMap.push_back("011111111110");
	asciiMap.push_back("000000000000");

	NodeMap map;
	map.Intialise(asciiMap, 50);

	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(RAYWHITE);

		map.Draw();

		EndDrawing();
	}

	CloseWindow();
}