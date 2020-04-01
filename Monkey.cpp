#include "Monkey.h"
#include <stdlib.h>


TMonkey::TMonkey() : TMammals()
{
	cvet = 3;
	kolvokonechnostei = 4;
	kolvosystems = 3;
}
const char* TMonkey::Golos()
{
	return "Uuuaaua";
}
int TMonkey::Echo()
{
	return 60 + rand() % (100 - 60);
}
double TMonkey::Moloco()
{
	return 0.0;
}