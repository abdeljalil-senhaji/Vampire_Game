

#include "Knowledge.h"
//la definition des méthodes et et leur implémentation.
Knowledge::Knowledge() {}

Knowledge::Knowledge(int academics, int computer, int finance, int investigation, int law, int medicine, int occult,
                     int politics, int science, int technology) : academics(academics), computer(computer),
                                                                  finance(finance), investigation(investigation),
                                                                  law(law), medicine(medicine), occult(occult),
                                                                  politics(politics), science(science),
                                                                  technology(technology) {}

int Knowledge::getAcademics() const {
    return academics;
}

void Knowledge::setAcademics(int academics) {
    Knowledge::academics = academics;
}

int Knowledge::getComputer() const {
    return computer;
}

void Knowledge::setComputer(int computer) {
    Knowledge::computer = computer;
}

int Knowledge::getFinance() const {
    return finance;
}

void Knowledge::setFinance(int finance) {
    Knowledge::finance = finance;
}

int Knowledge::getInvestigation() const {
    return investigation;
}

void Knowledge::setInvestigation(int investigation) {
    Knowledge::investigation = investigation;
}

int Knowledge::getLaw() const {
    return law;
}

void Knowledge::setLaw(int law) {
    Knowledge::law = law;
}

int Knowledge::getMedicine() const {
    return medicine;
}

void Knowledge::setMedicine(int medicine) {
    Knowledge::medicine = medicine;
}

int Knowledge::getOccult() const {
    return occult;
}

void Knowledge::setOccult(int occult) {
    Knowledge::occult = occult;
}

int Knowledge::getPolitics() const {
    return politics;
}

void Knowledge::setPolitics(int politics) {
    Knowledge::politics = politics;
}

int Knowledge::getScience() const {
    return science;
}

void Knowledge::setScience(int science) {
    Knowledge::science = science;
}

int Knowledge::getTechnology() const {
    return technology;
}

void Knowledge::setTechnology(int technology) {
    Knowledge::technology = technology;
}
