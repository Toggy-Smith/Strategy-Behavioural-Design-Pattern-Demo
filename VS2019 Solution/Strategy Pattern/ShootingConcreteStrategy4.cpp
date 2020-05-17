#include "ShootingConcreteStrategy4.hpp"

void ShootingConcreteStrategy4::fire
(sf::Vector2f spaceShipPosition, std::vector<Bullet>& bullets)
{
	bullets.push_back(Bullet(spaceShipPosition, 45.0f, sf::Color::White));
}