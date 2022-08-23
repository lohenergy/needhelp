#pragma once
#include <string>
#include <iostream>
#include "Character.h"
class Dialogue
{
private:
	char dialogue;
	char choice;
	int x;
	int y;
public:
	Dialogue();
	std::string text;
	int getX();
	int getY();
	void herodialogue(Character* hero);
	void superiordialogue();
	void mercenarydialogue();
	int speed;

};

