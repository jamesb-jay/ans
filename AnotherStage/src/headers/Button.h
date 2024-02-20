#pragma once

#include <SDL.h>
#include "Entity.h"

class Button :
    public Entity
{
private:
    void* buttonAction;
public:
    Button(void (*action) (Button*));
    Button(void);
    void handle(SDL_Event e);
};

