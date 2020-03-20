#include "game.h"
using namespace std;



Game::Game()
{
	choice = 0;
	playing = true;
	activeCharacter = 0;
	filename = "character.txt";
}

Game::~Game()
{
}
void Game::initGame()
{
	createNewCharacter();
}
void Game::mainMenu()
{
	std::cout << "MAIN MENU" << endl;
	std::cout << "0:Quit" << endl;
	std::cout << "1:travel" << endl;
	std::cout << "2:shop" << endl;
	std::cout << "3:level up" << endl;
	std::cout << "4:rest" << endl;
	std::cout << "5: Character sheet" << std::endl;
	std::cout << "6: Create character" << std::endl;
	std::cout << "7: Save Character " << std::endl;
	std::cout << std::endl;

	std::cout << std::endl << "Choice:";
	std::cin >> choice;
	std::cout << std::endl;

	switch (choice)
	{
	case0:
		playing = false;
		break;
	case 5:
		Character[activeCharacter].printStats();
		break;
	case 6:
		cin.ignore();
		createNewCharacter();
		saveCharacters();
		break;
	case 7:
		saveCharacters();
		break;
	case 8:
		loadCharacter();
		break;


	  
	  default:
		break;
	}

	void Game::createNewCharacter()
	{
	
		std::string name;
		cout << "Enter name for character:";
		getline(std::cin, name);
		std::cin.ignore();
		
		character.push_back(character());
		acticeCharacter = character.size() - 1;
		character.[activeCharacter].initialize(name);
	}

	void Game::saveCharacters()
	{
		std::ofstream outfile(filename);

		if (outfile.is_open())
		{
			for (size_t i = 0; i < characters.size(); i++)
			{
				outfile << character[i].getString() <<"\n";
			}
		}
		outfile.class();
	}

	void Game::loadCharacters()
	{

	}
