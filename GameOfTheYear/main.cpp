#include <iostream>
#include "wizard.h"

int main() {
	setlocale(0, "RUS");
	wizard w;
	enemy e;
	kent k;
	w.punch(e);
	std::cout << "�������� ���������� " << e.get_hp() << " ��" << std::endl;
	w.kent_heal(k);
	std::cout << "������������� �������� " << k.get_hp() << " ��" << std::endl;
	return 0;
}