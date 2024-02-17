#pragma once

#include <SDL.h>
#include <string>
#include "AnsLogSource.h"

using namespace std;

class Window : protected AnsLogSource
{
private:
    string window_title;
    int width;
    int height;
    bool running;

    SDL_Window* sdl_window;
    SDL_Surface* sdl_surface;

public:
    Window(string window_title, int width, int height);
    ~Window();

    void start();
    void close();

protected:
    void init();
};

