#ifndef MONSTER
#define MONSTER

#define MAX_HP 500
#define DMG 20

class monster;

class hero {
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

class monster {
private:
	int hp = MAX_HP; //здоровье
	int dmg = DMG; //дамаг
public:
	void punch(hero& e);
};


#endif
