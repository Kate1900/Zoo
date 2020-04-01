#ifndef _Lizard_h_
#define _Lizard_h_
#include "Reptiles.h"

class TLizard : public TReptiles
{
public:
    TLizard();
    const char* Golos();
    int teeth();
    bool Shell();
};


#endif 
