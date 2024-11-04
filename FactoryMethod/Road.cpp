
#include "Road.h"
#include "Visitor/RoadReport.h"

void Road::accept(RoadReport *v){
v->visit(this);
}
