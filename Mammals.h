#ifndef _Mammals_h_
#define _Mammals_h_

#include "Animals.h"
class TMammals : public TAnimals
{
protected:
	int pol;
	bool sherst;
	bool pozvonochnik;
public:
	TMammals();
	int GetPol();
	bool GetSherst();
	bool GetPozvonochnik();

	void SetSherst(bool s);

	double Moloco();
	const char* Golos(); 
};
#endif
