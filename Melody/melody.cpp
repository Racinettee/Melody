#include <SDL2/SDL.h>
#undef main
#include "MelodyGame.hpp"

int main(int argc, char** argv)
{
	MelodyGame melodyGame;
	melodyGame.run();
	return 0;
}