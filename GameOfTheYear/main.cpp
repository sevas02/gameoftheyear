#include <iostream>
#include "wizard.h"

int main() {
	setlocale(0, "RUS");
	wizard w;
	enemy e;
	kent k;
	w.punch(e);
	std::cout << "Нанесено противнику " << e.get_hp() << " ХП" << std::endl;
	w.kent_heal(k);
	std::cout << "Восстановлено союзнику " << k.get_hp() << " ХП" << std::endl;
	return 0;
}