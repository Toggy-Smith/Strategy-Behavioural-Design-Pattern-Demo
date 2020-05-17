#include "ShootingConcreteStrategy1.hpp"

void ShootingConcreteStrategy1::fire
(sf::Vector2f spaceShipPosition, std::vector<Bullet>& bullets)
{
	bullets.push_back(Bullet(spaceShipPosition, -45.0f, sf::Color::Red));
	bullets.push_back(Bullet(spaceShipPosition, 45.0f, sf::Color::Red));
}