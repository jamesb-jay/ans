#include "headers/Button.h"

Button::Button(void(*action)(Button*))
{
	buttonAction = action;
}

Button::Button(void)
{
}

void Button::handle(SDL_Event e)
{
}

