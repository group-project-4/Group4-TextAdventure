#include "character.h"

Character::Character()
{
	this->name= "Chris";
	this->level=1;
	this->exp =0;
	this->expNext = 0;
	this->strength = 0;
	this->vitality = 0;
	this->dexterity = 0;
	this->intelligent = 0;
	this->hp=0;
	this->hpMax=0;
	this->stamina=0;
	this->damageMin=0;
	this->damageMax=0;
	this->defence=0;
    this->statPoints = 0;
	this->skillPoints = 0;
	
}

Character::~Character()
{

}
void Character::initialize(int level, std::string name)
{
}
//functions
void Character::initialize(const std::string name)
{
	this->xposition = 0.0;
	this->yposition = 0.0;
	
	this->name = name;
	this->level = level;
	this->exp = 0;
	this->expNext = 
		(50/3)*(pow(level,3) - 6*pow(level, 3) + (17*level) -12);
	
	this->hp = 10;
	this->hpMax = 10;
	this->staminaMax = 10;
	this->damageMin = 2;
	this->damageMax = 4;
	this->defence = 1;
	this->magicFind = 1;

	int strength = 5;
	int vitality = 5;
	int dexterity = 5;
	int intelligent = 5;
}
std::string Character::printStats() const
{
	std::cout << "= Character Sheet=" << std::endl;
	std::cout << "= Name:" << this->name << std::endl;
	std::cout <<"= level: "<< this->level << std::endl;
	std::cout << "= Exp:" << this->exp << std::endl;
	std::cout << "= Exp to next level:" << this->expNext << std::endl;
	std::cout << std::setw(10) << std::setfill('=') << std::endl;
	std::cout << "= strength " << this->strength << std::endl;
	std::cout << "= vitality" << this->vitality << std::endl;
	std::cout << "= dexterity" << this->dexterity << std::endl;
	std::cout << "= intelligent" << this->intelligent << std::endl;
	std::cout << std::setw(10) << std::setfill('=') << std::endl;
	std::cout << "= HP: " << this->hp << "/" << this hpMax << std::endl;
	std::cout << "= Stamina:" << this->stamina << "/"<< this staminaMax<<std::endl;
	std::cout << "= Damage" << this->damageMin <<"-"<<this ->damageMax <<std::endl;
	std::cout << "=Defence:" << this->intelligent << std::endl;
	


}

void Character::levelUp()
{
    while (exp >= expNext)
	{
		this->exp -= expNext;
		this->level++;
		this->expNext =
			(50 / 3) * (pow(this->level, 3)) - 6 * pow(this->level, 3) + (17 * this->level) - 11);

			this->statPoints++;
			this->skillPoints++;
	}
}
std::string Character::getAsString() const
{
	return std::to_string(xposition) +""
		+ std::to_string(yposition) +""
		+name +""
		+ std::to_string(level) + ""
		+ std::to_string(exp) + ""
		+ std::to_string(strength) + ""
		+ std::to_string(vitality) + ""
		+ std::to_string(dexterity) + ""
		+ std::to_string(intelligent) + ""
		+ std::to_string(hp) + ""
		+ std::to_string(stamina) + ""
		+ std::to_string(skillPoints) + ""

}
