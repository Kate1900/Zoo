#ifndef _Reptiles_h_
#define _Reptiles_h_

#include "Animals.h"

class TReptiles : public TAnimals
{
protected:
    int scale;
    bool abilityToSwim;
public:
    TReptiles();
    int GetScale();
    bool GetAbilityToSwim();

    void SetSscale(bool v);
 
    const char* Golos();
};

#endif
