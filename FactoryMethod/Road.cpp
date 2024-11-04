#include "Road.h"

Road::Road()
{

}

void Road::accept(RoadReport *v){
    v->visit(this);
}
int Road::getEfficiencyValue(){
    return efficiencyValue;
}
Road::~Road()
{

}
