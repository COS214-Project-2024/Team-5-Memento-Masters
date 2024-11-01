#include "Citizen.h"

Citizen::Citizen()
{

}
void Citizen::accept(CitizenReport *v){
    v->visit(this);
}
Citizen::~Citizen()
{

}