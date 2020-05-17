#pragma once

#include "Bullet.hpp"

#include <vector>

class ShootingStrategy {
	public:
		virtual void fire(sf::Vector2f, std::vector<Bullet>&) = 0;
};