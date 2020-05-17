#include "Bullet.hpp"

Bullet::Bullet
(sf::Vector2f position, float angle, sf::Color color)
{
	m_rectangleShape.setSize(sf::Vector2f(10, 20));
	m_rectangleShape.setOrigin(m_rectangleShape.getSize() / 2.0f);
	m_rectangleShape.setPosition(position);
	m_rectangleShape.setRotation(angle);
	m_rectangleShape.setFillColor(color);
}

bool Bullet::outOfBounds
(sf::RenderWindow& window)
{
	sf::IntRect windowBounds{ 0, 0, (int) window.getSize().x, (int) window.getSize().y };

	if (windowBounds.intersects((sf::IntRect) m_rectangleShape.getGlobalBounds())) {
		return false;
	} else {
		return true;
	}
}

void Bullet::update
(const float elapsedTime)
{
	const float speed = 100.0f;

	const float PI = (float) 3.14;

	sf::Vector2f velocity;

	velocity.x = sin((PI / 180) * m_rectangleShape.getRotation()) * speed * elapsedTime;
	velocity.y = -cos((PI / 180) * m_rectangleShape.getRotation()) * speed * elapsedTime;

	m_rectangleShape.move(velocity);
}

void Bullet::render
(sf::RenderWindow& window)
{
	window.draw(m_rectangleShape);
}