

#include "Mental.h"
//la definition des méthodes et et leur implémentation.
Mental::Mental(int perception, int intelligence, int wits) : perception(perception), intelligence(intelligence),
                                                             wits(wits) {}

Mental::Mental() {}

int Mental::getPerception() const {
    return perception;
}

void Mental::setPerception(int perception) {
    Mental::perception = perception;
}

int Mental::getIntelligence() const {
    return intelligence;
}

void Mental::setIntelligence(int intelligence) {
    Mental::intelligence = intelligence;
}

int Mental::getWits() const {
    return wits;
}

void Mental::setWits(int wits) {
    Mental::wits = wits;
}
