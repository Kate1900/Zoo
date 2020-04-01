#include "Lizard.h"

TLizard::TLizard() : TReptiles()
{
	cvet = 3;
	kolvokonechnostei = 4;
	kolvosystems = 3;
}

const char* TLizard::Golos()
{
	return "Frrt";
}

int TLizard::teeth()
{
	return 0;
}
bool TLizard::Shell()
{
	return 1;
}