#include "Snake.h"
#include <stdlib.h>

TSnake::TSnake() : TReptiles()
{
	cvet = 5;
	kolvokonechnostei = 0;
	kolvosystems = 3;
}

const char* TSnake::Golos()
{
	return "Shshsh";
}

int TSnake::teeth()
{
	return 64 + rand() % (80 - 64);
}