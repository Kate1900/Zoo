#include "Lioness.h" 
#include <stdlib.h>

TLioness::TLioness() : TMammals()
{
	cvet = 1;
	kolvokonechnostei = 4;
	kolvosystems = 5;
}
const char* TLioness::Golos()
{
	return "Raarrr";
}

const char* TLioness::Eating()
{
	return "meat";
}
double TLioness::Moloco()
{
	return 0.0;
}