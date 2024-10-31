#include "CityObserver.h"
#include "City.h"

CityObserver::CityObserver() : subject(nullptr) {}

CityObserver::~CityObserver() {
    //delete this->subject;
}

void CityObserver::setSubject(City* subject) {
    this->subject = subject;
}