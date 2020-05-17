#include "ShootingConcreteStrategy5.hpp"

void ShootingConcreteStrategy5::fire
(sf::Vector2f spaceShipPosition, std::vector<Bullet>& bullets)
{
	bullets.push_back(Bullet(spaceShipPosition, -90.0f, sf::Color(0, 255, 0)));
	bullets.push_back(Bullet(spaceShipPosition, -45.0f, sf::Color(0, 200, 0)));
	bullets.push_back(Bullet(spaceShipPosition, -22.5f, sf::Color(0, 150, 0)));
	bullets.push_back(Bullet(spaceShipPosition, 0.0f, sf::Color(0, 100, 0)));
	bullets.push_back(Bullet(spaceShipPosition, 22.5f, sf::Color(0, 150, 0)));
	bullets.push_back(Bullet(spaceShipPosition, 45.0f, sf::Color(0, 200, 0)));
	bullets.push_back(Bullet(spaceShipPosition, 90.0f, sf::Color(0, 255, 0)));
}