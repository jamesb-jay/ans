#include "headers/Entity.h"

Entity::~Entity()
{
	SDL_FreeSurface(surface);
}

bool Entity::loadBMP(const char* path)
{
	surface = SDL_LoadBMP(path);

	if (surface == NULL) return false;

	return true;
}

void Entity::draw(SDL_Surface* targetSurface)
{
	SDL_BlitSurface(surface, srcRect, targetSurface, destRect);
}

void Entity::update()
{
}

void Entity::handle(SDL_Event e)
{
}
