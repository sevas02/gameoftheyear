#include "Monster.h"

void monster::punch(enemy& e) {
	e.hp -= dmg;
	mana += dmg * 0.3;
}
