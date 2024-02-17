#pragma once

#include <SDL.h>


class Entity
{
protected:
	SDL_Rect* srcRect = NULL;
	SDL_Rect* destRect = NULL;
	SDL_Surface* surface = NULL;

public:
	~Entity()
	{
		SDL_FreeSurface(surface);
	}

	bool loadBMP(const char* path)
	{
		surface = SDL_LoadBMP(path);

		if (surface == NULL) return false;

		return true;
	}

	void draw(SDL_Surface* targetSurface)
	{
		SDL_BlitSurface(surface, srcRect, targetSurface, destRect);
	}
};

