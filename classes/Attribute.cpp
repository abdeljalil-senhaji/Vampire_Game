
#include "Attribute.h"
//la definition des méthodes et et leur implémentation.
Attribute::Attribute() {}

Attribute::Attribute(const Physical &physical, const Social &social, const Mental &mental) : physical(physical),
                                                                                             social(social),
                                                                                             mental(mental) {}

const Physical &Attribute::getPhysical() const {
    return physical;
}

void Attribute::setPhysical(const Physical &physical) {
    Attribute::physical = physical;
}

const Social &Attribute::getSocial() const {
    return social;
}

void Attribute::setSocial(const Social &social) {
    Attribute::social = social;
}

const Mental &Attribute::getMental() const {
    return mental;
}

void Attribute::setMental(const Mental &mental) {
    Attribute::mental = mental;
}

Attribute::~Attribute() {

}
