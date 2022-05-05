#ifndef WIZARD
#define WIZARD

#define MAX_HP 150
#define MAX_MANA 150
#define DMG 30

class monster;

class enemy {
	friend class monster;
private:
	int hp = 40; //здоровье
	int dmg; //дамаг
	double mana; //мана
public:
	int get_hp() {
		return hp;
	}
};

class kent {
	friend class monster;
private:
	int hp = 1; //здоровье
	int dmg; //дамаг
	double mana; //мана
public:
	int get_hp() {
		return hp;
	}
};

class monster {
private:
	int hp = MAX_HP; //здоровье
	int dmg = DMG; //дамаг
	double mana = MAX_MANA; //мана
	int heal_power = 10;//сколько маг может дать хилла
public:
	void punch(enemy& e);

};


#endif
