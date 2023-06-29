#pragma once
#include <iostream>
#include <vector>
class Model_Character{
private:
	int health;
	int position[2]; //X, Y
public:
	Model_Character(int, int, int);
	void setHealth(int);
	int getHealth();
	int getPositionX();
	int getPositionY();
	void setPositionX(int);
	void setPositionY(int);
};
class Model_Player : Model_Character {
private:
	int bulletType;
	std::vector<int> playerItemsPassive;
	int playerItemActive;
public:
	Model_Player(int, int, int, int, int);
	void setBulletType(int);
	int getBulletType();
	void addItem(int);
	void setPlayerItemActive(int);
	int GetPlayerItemActive();
};

