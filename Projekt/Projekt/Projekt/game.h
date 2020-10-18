#pragma once
#ifndef game_h
#define game_h

#include <SFML\Graphics.hpp>

#define lenght 20
#define width 10


class game
{
	int map[lenght][width];
	sf::CircleShape cialo;
public:
	game();
	void draw(sf::RenderWindow&window);
};

#endif