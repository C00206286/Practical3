#include "Game.h"

int main(void)
{
	GL_POINTS;
	GL_LINES;
	GL_LINE_STRIP;
	GL_LINE_LOOP;
	GL_TRIANGLES;
	GL_TRIANGLE_STRIP;
	GL_TRIANGLE_FAN;
	GL_QUADS;
	GL_QUAD_STRIP;
	GL_POLYGON;
	Game& game = Game();
	game.run();

}