#include "Model_Character.h"

Model_Character::Model_Character(int health, int x, int y) {//(health, x, y)
	this->health = health;
	position[0] = x;
	position[1] = y;
}
void Model_Character::setHealth(int health) {
	this->health = health;
}
int Model_Character::getHealth() {
	return health;
}
int Model_Character::getPositionX() {
	return position[0];
}
int Model_Character::getPositionY() {
	return position[1];
}
void Model_Character::setPositionX(int x) {
	position[0] = x;
}
void Model_Character::setPositionY(int y) {
	position[1] = y;
}


///presonaje

Model_Player::Model_Player(int health, int x, int y, int BulletType, int ActiveItem) : Model_Character(health, x, y) {
	playerItemActive = ActiveItem;
	this->bulletType = BulletType;
}
void Model_Player::setBulletType(int) {

}
int Model_Player::getBulletType() {
	return bulletType;
}
//void Model_Player::addItem(int);
//void Model_Player::setPlayerItemActive(int);
//int Model_Player::GetPlayerItemActive();