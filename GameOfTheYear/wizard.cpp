#include "wizard.h"

void wizard::fire_dmg(enemy &e) {

}
void wizard::punch(enemy &e) {
	e.hp -= dmg;
	mana += dmg * 0.3;
}
void wizard::kent_heal(kent &k) {
	if (mana > MAX_MANA * 0.3) {
		k.hp += heal_power;
		mana = 0;
	}
}

