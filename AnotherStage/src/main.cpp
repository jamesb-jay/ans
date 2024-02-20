#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

#include "headers/Launcher.h"
#include "headers/Button.h"

using namespace std;

int main(int argc, char** argv)
{
	Launcher launcher = Launcher(600, 400);
	
	Button exitButton = Button();

	launcher.start();

	return 0;
}