#include "ShootingConcreteStrategy3.hpp"

void ShootingConcreteStrategy3::fire
(sf::Vector2f spaceShipPosition, std::vector<Bullet>& bullets)
{
	bullets.push_back(Bullet(spaceShipPosition, -45.0f, sf::Color::Red));
	bullets.push_back(Bullet(spaceShipPosition, 0.0f, sf::Color::Green));
	bullets.push_back(Bullet(spaceShipPosition, 45.0f, sf::Color::Blue));
}