#include "game.h"


game::game()
{
	sf::RenderWindow window(sf::VideoMode(600, 400), "Tetris");
	for (int i = 0; i < lenght; ++i)
	{
		for (int j = 0; j < width; ++j)
		{
			map[i][j] = 0;
		}
	}
}
void game::draw(sf::RenderWindow &window)
{
	cialo.setRadius(100.f);
	window.clear();
	window.draw(cialo);
	window.display();
	//window.draw();
}