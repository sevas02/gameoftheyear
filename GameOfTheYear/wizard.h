#ifndef WIZARD
#define WIZARD

#define MAX_HP 150
#define MAX_MANA 150
#define DMG 30

class wizard;

class enemy {
	friend class wizard;
private:
	int hp = 40; //��������
	int dmg; //�����
	double mana; //����
public:
	int get_hp() {
		return hp;
	}
};

class kent {
	friend class wizard;
private:
	int hp = 1; //��������
	int dmg; //�����
	double mana; //����
public:
	int get_hp() {
		return hp;
	}
};

class wizard {
private:
	int hp = MAX_HP; //��������
	int dmg = DMG; //�����
	double mana = MAX_MANA; //����
	int heal_power = 10;//������� ��� ����� ���� �����
public:
	void punch(enemy &e);
	void kent_heal(kent &k);
	void fire_dmg(enemy &e);

};


#endif

/*
class Person {
protected:
	int hp; //��������
	int dmg; //�����
	double mana; //����
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
		hp = 40; //��������
		dmg; //�����
		mana; //����
	}

};

class kent {
	friend class wizard;
private:
	int hp = 1; //��������
	int dmg; //�����
	double mana; //����
public:
	int get_hp() {
		return hp;
	}
};

class wizard {
private:
	int hp = MAX_HP; //��������
	int dmg = DMG; //�����
	double mana = MAX_MANA; //����
	int heal_power = 10;//������� ��� ����� ���� �����
public:
	void punch(enemy &e);
	void kent_heal(kent &k);
	void fire_dmg(enemy &e);

};


#endif
*/