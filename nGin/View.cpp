#include "View.hpp"

View::View(int width, int height)
{
	view = LoadRenderTexture(width, height);
}

View::~View()
{
	UnloadRenderTexture(view);
}

void View::Begin() {
	BeginTextureMode(view);
}

void View::End() {
	EndTextureMode();
}