#include <SFML\Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 400), "Tetris");
	sf::CircleShape cialo(100.f);
	cialo.setFillColor(sf::Color::Yellow);
	sf::Vector2f ruch = { 0.05f,0.05f };
	cialo.move(ruch);
	cialo.scale(ruch);
	while (window.isOpen())
	{
		sf::Event event;
		cialo.move(ruch);

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		
		}
		window.clear();
		window.draw(cialo);
		window.display();

	}


	return 0;
}