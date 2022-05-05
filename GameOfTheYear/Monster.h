#ifndef WIZARD
#define WIZARD

#define MAX_HP 150
#define MAX_MANA 150
#define DMG 30

class monster;

class enemy {
	friend class monster;
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
	friend class monster;
private:
	int hp = 1; //��������
	int dmg; //�����
	double mana; //����
public:
	int get_hp() {
		return hp;
	}
};

class monster {
private:
	int hp = MAX_HP; //��������
	int dmg = DMG; //�����
	double mana = MAX_MANA; //����
	int heal_power = 10;//������� ��� ����� ���� �����
public:
	void punch(enemy& e);

};


#endif
