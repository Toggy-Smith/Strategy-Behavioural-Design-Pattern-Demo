#pragma once

#include "Bullet.hpp"
#include "ShootingStrategy.hpp"

#include <vector>

class ShootingConcreteStrategy3 : public ShootingStrategy {
	public:
		void fire(sf::Vector2f, std::vector<Bullet>&) override;
};