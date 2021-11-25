
#include "Skill.h"
//la definition des méthodes et et leur implémentation.
Skill::Skill(int animalKen, int crafts, int drive, int etiquette, int firearms, int larceny, int melee, int performance,
             int stealth, int survival) : animalKen(animalKen), crafts(crafts), drive(drive), etiquette(etiquette),
                                          firearms(firearms), larceny(larceny), melee(melee), performance(performance),
                                          stealth(stealth), survival(survival) {}

Skill::Skill() {}

int Skill::getAnimalKen() const {
    return animalKen;
}

void Skill::setAnimalKen(int animalKen) {
    Skill::animalKen = animalKen;
}

int Skill::getCrafts() const {
    return crafts;
}

void Skill::setCrafts(int crafts) {
    Skill::crafts = crafts;
}

int Skill::getDrive() const {
    return drive;
}

void Skill::setDrive(int drive) {
    Skill::drive = drive;
}

int Skill::getEtiquette() const {
    return etiquette;
}

void Skill::setEtiquette(int etiquette) {
    Skill::etiquette = etiquette;
}

int Skill::getFirearms() const {
    return firearms;
}

void Skill::setFirearms(int firearms) {
    Skill::firearms = firearms;
}

int Skill::getLarceny() const {
    return larceny;
}

void Skill::setLarceny(int larceny) {
    Skill::larceny = larceny;
}

int Skill::getMelee() const {
    return melee;
}

void Skill::setMelee(int melee) {
    Skill::melee = melee;
}

int Skill::getPerformance() const {
    return performance;
}

void Skill::setPerformance(int performance) {
    Skill::performance = performance;
}

int Skill::getStealth() const {
    return stealth;
}

void Skill::setStealth(int stealth) {
    Skill::stealth = stealth;
}

int Skill::getSurvival() const {
    return survival;
}

void Skill::setSurvival(int survival) {
    Skill::survival = survival;
}
