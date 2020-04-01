#ifndef _Monkey_h_
#define _Monkey_h_
#include "Mammals.h" 

class TMonkey : public TMammals
{
public:
	TMonkey();
	const char* Golos();
	int Echo();
	double Moloco();
};

#endif
