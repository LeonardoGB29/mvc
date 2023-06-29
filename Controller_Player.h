#pragma once
#include "Controller_Character.h"

class Controller_Player:Controller_Character {
private:
	Controller_Player player;

public:
	//void Attack_Player();
	void Move() override;
}