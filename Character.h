#pragma once
#include "inventory.h"



class Character
{
public:
	Character();
	virtual ~Character();
	
	void initialize(int level, std::string name);

	//Functions
	void initialize(const std::string name);
	std printStats() const;
	void levelUp;
	std::string getAsString()const;
	
	
	//Accessors
	inline const double& getx() const { return this->xposition; }
	inline const double& gety() const { return this->yposition; }
	inline const std::string& getName() const { return this->name; }
	inline const int& getlevel() const { return this->level; }
	inline const int& getExp() const { return this->exp; }
	inline const int& getHP() const { return this->hp; }
	inline const int& getHPMAX() const { return this->hpMax; }
	inline const int& getstamina() const { return this->stamina; }
	inline const int& getDamageMin() const { return this->damageMin; }
	inline const int& getDamageMax() const { return this->damageMax; }
	inline const int& getDefence() const { return this->defence; }
	inline const int& getExpNext() const { return this->expNext; }

	
	//Modifier

private:
	double xposition;
    double yposition;
	
	std::string name;
	int level;
	int exp;
	int expNext;
	int hp;
	int hpMax;
	int stamina;
	int staminaMax;
	int damageMin;
	int damageMax;
	int defence;

	int strength;
	int vitality;
	int dexterity;
	int intelligent;
	int magicFind;

	int statPoints;
	int skillPoints;
};
