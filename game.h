#pragma once
#include<ctime>
#include<vector>
#include<fstream>
#include"functions.h"
#include"character.h"


class Game
{
public:
	Game();
	virtual ~Game();
	//operators
	//accessors

	inline bool getplaying() const { return this->playing; }

	//functions
	void mainMenu();
	void createNewCharacter();
	void saveCharacters();
	void loadCharacter();
	void initGame();
private:
	int choice;
	bool playing;

	//Character related
	int activeCharacter;
	std::vector<Character> characters;
	std::string filename;

};
© 2020 GitHub, Inc.
