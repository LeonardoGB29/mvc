#pragma once
#include <SFML/Graphics.hpp>
#include "Model.h"

class View {
private:
    sf::RenderWindow window;

public:
    View(int width, int height, const std::string& title);
    bool isOpen();
    void close();
    void clear();
    void display();
    bool pollEvent(sf::Event& event);
    void draw(const sf::Drawable& drawable);
    void processEvents();
};