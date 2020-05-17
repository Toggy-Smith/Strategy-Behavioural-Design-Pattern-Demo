#include "ShootingConcreteStrategy2.hpp"

void ShootingConcreteStrategy2::fire
(sf::Vector2f spaceShipPosition, std::vector<Bullet>& bullets)
{
	bullets.push_back(Bullet(spaceShipPosition, 0.0f, sf::Color::Blue));
}