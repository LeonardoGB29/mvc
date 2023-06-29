#include "ControllerCharacter.h"
#include "View_keys.h"

void ControllerCharacter::Move(){
	View_Keys a;
	if (a.keyboardPressW())

	else if (a.keyboardPressS())
	if (a.keyboardPressA())
	else if (a.keyboardPressD())
};

void ControllerCharacter::update() {

};
