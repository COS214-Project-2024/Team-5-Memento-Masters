#include "Building.h"

Building::Building()
{

}
void Building::accept(BuildingReport *v){
    v->visit(this);
}
Building::~Building()
{

}