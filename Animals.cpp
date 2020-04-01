#include "Animals.h"

TAnimals::TAnimals()
{
	cvet = 0;
	kolvokonechnostei = 0;
	kolvosystems = 1;
}
int TAnimals::GetCvet()
{
	return cvet;
}
int TAnimals::GetKolvokonechnostei()
{
	return kolvokonechnostei;
}
int TAnimals::GetKolvosystems()
{
	return kolvosystems;
}
void TAnimals::SetKolvokonechnostei(int k)
{
	if (k > 0 && k < 10)
		kolvokonechnostei = k;
}
void TAnimals::SetCvet(int c)
{
	cvet = c;
}
const char* TAnimals::Golos()
{
	return "";
}