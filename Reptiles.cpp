#include "Reptiles.h"

TReptiles::TReptiles() : TAnimals()
{
    scale = 0;
    abilityToSwim = 0;
}
int TReptiles::GetScale()
{
    return scale;
}

bool TReptiles::GetAbilityToSwim()
{
    return abilityToSwim;
}
void TReptiles::SetSscale(bool v)
{
    scale = v;
}
const char* TReptiles::Golos()
{
    return "Tchsh";
}