#pragma once
class Ork
{

private:
	int hp;
	char name[20];

public:
	Ork(const char* name, int hp = 100);

	int GetHP() const { return hp; }
	const char* GetName() const { return name; }

	void LostHP(int points);

	friend class Shaman;
	friend void ChangeName(Ork& ork, const char* newName);
};