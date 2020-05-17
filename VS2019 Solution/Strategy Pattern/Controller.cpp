#include "Controller.hpp"

Controller::Controller
(sf::RenderWindow& window)
	: m_window(window), m_spaceShip(window)
{}

void Controller::handleEvents() {
	sf::Event event;

	while (m_window.pollEvent(event)) {
		m_spaceShip.handleEvent(event);

		switch (event.type) {
			default:
				break;
			case sf::Event::Closed:
				m_window.close();
		}
	}
}

void Controller::update() {
	static sf::Clock updateClock;

	m_spaceShip.update(updateClock.getElapsedTime().asSeconds());

	updateClock.restart();
}

void Controller::render() {
	m_window.clear();

	m_spaceShip.render();

	m_window.display();
}