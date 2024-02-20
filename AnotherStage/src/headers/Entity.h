#pragma once

#include <SDL.h>


class Entity
{
protected:
	SDL_Rect* srcRect = NULL;
	SDL_Rect* destRect = NULL;
	SDL_Surface* surface = NULL;

public:
	~Entity();

	bool loadBMP(const char* path);
	void draw(SDL_Surface* targetSurface);
	void update();
	void handle(SDL_Event e);
};

