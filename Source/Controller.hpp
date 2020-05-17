#pragma once

#include "SFML/Graphics.hpp"

#include "SpaceShip.hpp"

class Controller {
	private:
		sf::RenderWindow& m_window;

		SpaceShip         m_spaceShip;

	public:
		     Controller   (sf::RenderWindow&);

		void handleEvents ();
		void update       ();
		void render       ();
};