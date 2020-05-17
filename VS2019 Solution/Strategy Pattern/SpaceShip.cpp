#include "SpaceShip.hpp"

SpaceShip::SpaceShip
(sf::RenderWindow& window)
	: m_window(window)
{
	m_triangle.setRadius(30);
	m_triangle.setPointCount(3); // Make it a triangle
	m_triangle.setOrigin(sf::Vector2f(m_triangle.getRadius(), m_triangle.getRadius()));
	m_triangle.setPosition(sf::Vector2f(static_cast<float>(window.getSize().x) / 2,
		                                static_cast<float>(window.getSize().y) / 10 * 9));
}

void SpaceShip::handleEvent
(sf::Event& event)
{
	if (event.type == sf::Event::KeyPressed) {
		if (event.key.code == sf::Keyboard::Num1) {
			delete m_shootingStrategy;

			m_shootingStrategy = new ShootingConcreteStrategy1;
		} else if (event.key.code == sf::Keyboard::Num2) {
			delete m_shootingStrategy;

			m_shootingStrategy = new ShootingConcreteStrategy2;
		} else if (event.key.code == sf::Keyboard::Num3) {
			delete m_shootingStrategy;

			m_shootingStrategy = new ShootingConcreteStrategy3;
		} else if (event.key.code == sf::Keyboard::Num4) {
			delete m_shootingStrategy;

			m_shootingStrategy = new ShootingConcreteStrategy4;
		} else if (event.key.code == sf::Keyboard::Num5) {
			delete m_shootingStrategy;

			m_shootingStrategy = new ShootingConcreteStrategy5;
		}
	}
}

void SpaceShip::update
(const float elapsedTime)
{
	if (m_shootingTimer.getElapsedTime().asSeconds() >= 0.5) {
		if (m_shootingStrategy != nullptr)
			m_shootingStrategy->fire(m_triangle.getPosition(), m_bullets);

		m_shootingTimer.restart();
	}

	std::vector<unsigned int> indicesOfRemovedBullets;

	for (unsigned int i = 0; i < m_bullets.size(); i++) {
		if (m_bullets[i].outOfBounds(m_window)) {
			indicesOfRemovedBullets.push_back(i);
		}
	}

	for (unsigned int i = 0; i < indicesOfRemovedBullets.size(); i++) {
		m_bullets.erase(m_bullets.begin() + indicesOfRemovedBullets[i] - i);
	}

	for (unsigned int i = 0; i < m_bullets.size(); i++) {
		m_bullets[i].update(elapsedTime);
	}
}

void SpaceShip::render() {
	m_window.draw(m_triangle);

	for (unsigned int i = 0; i < m_bullets.size(); i++)
		m_bullets[i].render(m_window);
}