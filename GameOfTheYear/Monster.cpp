#include "Monster.h"

void monster::punch(hero& e) {
	e.hp -= dmg;
}
