#ifndef WIZARD
#define WIZARD

#define MAX_HP 150
#define MAX_MANA 150
#define DMG 30

class wizard;

class enemy {
	friend class wizard;
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
	friend class wizard;
private:
	int hp = 1; //здоровье
	int dmg; //дамаг
	double mana; //мана
public:
	int get_hp() {
		return hp;
	}
};

class wizard {
private:
	int hp = MAX_HP; //здоровье
	int dmg = DMG; //дамаг
	double mana = MAX_MANA; //мана
	int heal_power = 10;//сколько маг может дать хилла
public:
	void punch(enemy &e);
	void kent_heal(kent &k);
	void fire_dmg(enemy &e);

};


#endif

/*
class Person {
protected:
	int hp; //здоровье
	int dmg; //дамаг
	double mana; //мана
public:
	int get_hp() {
		return hp;
	}
};

class wizard;

class enemy : Person {
	friend class wizard;

public:
	enemy() {
		hp = 40; //здоровье
		dmg; //дамаг
		mana; //мана
	}

};

class kent {
	friend class wizard;
private:
	int hp = 1; //здоровье
	int dmg; //дамаг
	double mana; //мана
public:
	int get_hp() {
		return hp;
	}
};

class wizard {
private:
	int hp = MAX_HP; //здоровье
	int dmg = DMG; //дамаг
	double mana = MAX_MANA; //мана
	int heal_power = 10;//сколько маг может дать хилла
public:
	void punch(enemy &e);
	void kent_heal(kent &k);
	void fire_dmg(enemy &e);

};


#endif
*/