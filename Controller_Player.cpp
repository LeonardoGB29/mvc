#include "Controller_Player.h"
#include "Controller_Character.h"
#include "View_keys.h"

//void Controller_PLayer :: Attack_Player() {};

void Move() override {
	View_Keys a;
	if (a.keyboardPressW()) {
		if (a.keyboardPressA()) {}
		else if (a.keyboardPressD()) {}
	}
	else if (a.keyboardPressS()) {
		if (a.keyboardPressA()) {}
		else if (a.keyboardPressD()) {}
	}
	if (a.keyboardPressA()) {
		if (a.keyboardPressW()) {}
		else if (a.keyboardPressS()) {}
	}
	else if (a.keyboardPressD()) {

		if (a.keyboardPressW()) {}
		else if (a.keyboardPressS()) {}
	}
};
