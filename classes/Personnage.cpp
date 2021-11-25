

#include "Personnage.h"
//la definition des méthodes et et leur implémentation.
Personnage::Personnage() {}

Personnage::Personnage(const string &name, const Clan &clan, const Attribute &attribute, const Abilitie &abilitie,
                       const Advantage &advantage) : name(name), clan(clan), attribute(attribute), abilitie(abilitie),
                                                     advantage(advantage) {}

const string &Personnage::getName() const {
    return name;
}

void Personnage::setName(const string &name) {
    Personnage::name = name;
}

const Clan &Personnage::getClan() const {
    return clan;
}

void Personnage::setClan(const Clan &clan) {
    Personnage::clan = clan;
}

const Attribute &Personnage::getAttribute() const {
    return attribute;
}

void Personnage::setAttribute(const Attribute &attribute) {
    Personnage::attribute = attribute;
}

const Abilitie &Personnage::getAbilitie() const {
    return abilitie;
}

void Personnage::setAbilitie(const Abilitie &abilitie) {
    Personnage::abilitie = abilitie;
}

const Advantage &Personnage::getAdvantage() const {
    return advantage;
}

void Personnage::setAdvantage(const Advantage &advantage) {
    Personnage::advantage = advantage;
}
