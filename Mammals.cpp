#include "Mammals.h"

TMammals::TMammals()
{
	pol = 0;
	sherst = 0;
	pozvonochnik = 0;
}
int TMammals::GetPol()
{
	return pol;
}
bool TMammals::GetSherst()
{
	return sherst;
}
bool TMammals::GetPozvonochnik()
{
	return pozvonochnik;
}
void TMammals::SetSherst(bool s)
{
	sherst = s;
}
double TMammals::Moloco()
{
	return 0.0;
}
const char* TMammals::Golos()
{
	return "AAAA";
}