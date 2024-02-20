#pragma once

#include <SDL.h>
#include <string>
#include <list>
#include "AnsLogSource.h"
#include "Entity.h"

using namespace std;

class Window : protected AnsLogSource
{
private:
    string window_title;
    int width;
    int height;

    SDL_Window* sdl_window;
    SDL_Surface* sdl_surface;
    list<Entity> entities;

    bool running = true;

public:
    Window(string window_title, int width, int height);
    ~Window();

    void start();

    void update();
    void draw();


private:
    void sendEvent(SDL_Event e);

protected:
    void init();
};

