#pragma once
class LevelController
{
public:
	startLevel();
	generateMap();
};

class Colision {
public:
	virtual sf::FloatRect getBounds() const = 0;
	bool isCollision(Colision& col)const; //colisiones
};	