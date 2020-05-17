#pragma once

#include "SFML/Graphics.hpp"

class Bullet {
	private:
		sf::RectangleShape m_rectangleShape;

	public:
		Bullet           (sf::Vector2f, float, sf::Color);
		
		bool outOfBounds (sf::RenderWindow&);
		void update      (const float);
		void render      (sf::RenderWindow&);
};