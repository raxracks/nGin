#pragma once
#include <raylib.h>

class View {
public:
	View(int width, int height);
	~View();

	void Begin();
	void End();

private:
	RenderTexture view;
};