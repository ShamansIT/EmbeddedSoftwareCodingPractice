#include <iostream>
#include "Ork.h"
#include "Shaman.h"

void ChangeName(Ork& ork, const char* newName) {
	strcpy_s(ork.name, 20, newName);
}

int main()
{
	Ork ork{ "Demon" };

	std::cout << "\nOrk name: " << ork.GetName()
		<< "\nOrk HP: " << ork.GetHP() << std::endl;

	Shaman shaman{ "Guldan" };

	std::cout << "\nShaman name: " << shaman.GetName()
		<< "\nShaman HP: " << shaman.GetHP() << std::endl;

	ork.LostHP(23);

	std::cout << "\nOrk HP: " << ork.GetHP() << std::endl;

	shaman.Heal(ork);

	std::cout << "\nOrk HP: " << ork.GetHP() << std::endl;

	ChangeName(ork, "Baldur");

	std::cout << "\nOrk name: " << ork.GetName() << std::endl;

}