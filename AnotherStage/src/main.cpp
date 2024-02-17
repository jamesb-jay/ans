#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

#include "headers/Launcher.h"

using namespace std;

int main(int argc, char** argv)
{
	Launcher launcher = Launcher(600, 400);
	launcher.start();

	return 0;
}