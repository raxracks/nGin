#include <raylib.h>
#include "View.hpp"
#include <imgui/imgui.h>
#include <rlImGui/rlImGui.h>

void Draw2DGrid(int width, int height, int offset, int spacing) {
	for (int i = 0; i < width; i += spacing) {
		DrawLine(i, 0, i, height, LIGHTGRAY);
	}
	for (int i = 0; i < height; i += spacing) {
		DrawLine(0, i, width, i, LIGHTGRAY);
	}
}

int main() {
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(900, 700, "nGin");
	MaximizeWindow();
	SetTargetFPS(60);

	View view3d(300, 250);
	View viewTop(300, 250);
	View viewSide(300, 250);
	View viewFront(300, 250);

	rlImGuiSetup(true);

	while (!WindowShouldClose()) {
		BeginDrawing();
		{
			ClearBackground(RAYWHITE);

			viewTop.Begin();
			{
				ClearBackground(BLACK);
			}
			viewTop.End();
		}
		EndDrawing();
	}

	CloseWindow();
	return 0;
}