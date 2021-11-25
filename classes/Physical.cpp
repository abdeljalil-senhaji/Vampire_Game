

#include "Physical.h"
//la definition des méthodes et et leur implémentation.
Physical::Physical(int strength, int dexterity, int stamina) : strength(strength), dexterity(dexterity),
                                                               stamina(stamina) {}

Physical::Physical() {}

Physical::~Physical() {

}

int Physical::getStrength() const {
    return strength;
}

void Physical::setStrength(int strength) {
    Physical::strength = strength;
}

int Physical::getDexterity() const {
    return dexterity;
}

void Physical::setDexterity(int dexterity) {
    Physical::dexterity = dexterity;
}

int Physical::getStamina() const {
    return stamina;
}

void Physical::setStamina(int stamina) {
    Physical::stamina = stamina;
}
