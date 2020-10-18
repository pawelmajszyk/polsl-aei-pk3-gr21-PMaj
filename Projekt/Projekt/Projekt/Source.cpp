#include <SFML\Graphics.hpp>
#include "game.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "Tetris");
	game gra;
	while (true)
	{
		gra.draw(window);
	}
	
	

	return 0;
}