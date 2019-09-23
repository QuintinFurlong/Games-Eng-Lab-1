#include <iostream>
#include <vector>
#include "AbstractFactory.h"
#include "Bridge.h"

int main()
{
	Factory* factory = new CharacterFactory;
	std::vector<Character*> characters;
	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());
	std::cout << characters.at(0) << std::endl;
	std::cout << characters.at(1) << std::endl;
	for (int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}
	delete characters.at(0);
	delete characters.at(1);

	DrawAPI* api = new DrawImp1();
	Character2* character2 = new Player2(api);
	character2->Draw();
	std::cout << character2 << std::endl;
	delete character2;

	system("pause");
	return 0;
}