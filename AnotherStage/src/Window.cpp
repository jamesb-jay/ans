#include <SDL.h>

#include "headers/GlobalDefaults.h"
#include "headers/Entity.h"
#include "headers/Window.h"

Window::Window(string window_title, int width, int height) : 
	AnsLogSource("Window", ANS_LOG_LEVEL_GLOBAL)
{
	this->window_title = window_title;
	this->width = (width > 0) ? width : ANS_WINDOW_DEFAULT_W;
	this->height = height > 0 ? height : ANS_WINDOW_DEFAULT_H;
	this->sdl_surface = NULL;
	this->sdl_window = NULL;
}

Window::~Window()
{
	logInfo("Closing...");
	SDL_FreeSurface(this->sdl_surface);
	this->sdl_surface = NULL;
	SDL_DestroyWindow(this->sdl_window);
	this->sdl_window = NULL;
	logInfo("Closed. Calling SDL_Quit()");
	SDL_Quit();
}

void Window::init()
{

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		logFatal("SDL could not initialise!");
		exit(ANS_ERR_SDL_INIT);
	}

	this->sdl_window = SDL_CreateWindow(
		this->window_title.c_str(),
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		this->width,
		this->height,
		SDL_WINDOW_SHOWN
	);

	if (this->sdl_window == NULL)
	{
		logFatal("SDL window coult not be created!");
		exit(ANS_ERR_SDL_WINDOW);
	}

	this->sdl_surface = SDL_GetWindowSurface(this->sdl_window);

	logInfo("Window created!");
	return;
}

void Window::start()
{
	init();
		logInfo("Starting loop.");


	Entity obj = Entity();
	obj.loadBMP("assets/fader.bmp");
	obj.draw(sdl_surface);

	SDL_UpdateWindowSurface(sdl_window);

	SDL_Event e; bool quit = false; while (quit == false) { while (SDL_PollEvent(&e)) { if (e.type == SDL_QUIT) quit = true; } }
		logInfo("Loop exited.");
}
