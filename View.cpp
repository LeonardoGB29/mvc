#include "View.h"

View::View(int width, int height, const std::string& title) {
    window.create(sf::VideoMode(width, height), title);
    window.setFramerateLimit(60);
}

bool View::isOpen() {
    return window.isOpen();
}

void View::close() {
    window.close();
}

void View::clear() {
    window.clear();
}

void View::display() {
    window.display();
}

bool View::pollEvent(sf::Event& event) {
    return window.pollEvent(event);
}

void View::draw(const sf::Drawable& drawable) {
    window.draw(drawable);
}

void View::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}