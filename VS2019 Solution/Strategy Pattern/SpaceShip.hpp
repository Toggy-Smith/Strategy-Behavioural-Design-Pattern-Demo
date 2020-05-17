#pragma once

#include "SFML/Graphics.hpp"

#include "Bullet.hpp"
#include "ShootingStrategy.hpp"
#include "ShootingConcreteStrategy1.hpp"
#include "ShootingConcreteStrategy2.hpp"
#include "ShootingConcreteStrategy3.hpp"
#include "ShootingConcreteStrategy4.hpp"
#include "ShootingConcreteStrategy5.hpp"

class SpaceShip {
	private:
		sf::RenderWindow&   m_window;

		sf::CircleShape     m_triangle;

		sf::Clock           m_shootingTimer;

		std::vector<Bullet> m_bullets;

		ShootingStrategy*   m_shootingStrategy{ nullptr };

	public:
		     SpaceShip   (sf::RenderWindow&);

		void handleEvent (sf::Event&);
		void update      (const float);
		void render      ();
};