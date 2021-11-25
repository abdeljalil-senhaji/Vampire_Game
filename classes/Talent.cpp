

#include "Talent.h"
//la definition des méthodes et et leur implémentation.
Talent::Talent(int alertness, int athletics, int awareness, int brawl, int empathy, int expression, int intimidation,
               int leadership, int streetwise, int subterfuge) : alertness(alertness), athletics(athletics),
                                                                 awareness(awareness), brawl(brawl), empathy(empathy),
                                                                 expression(expression), intimidation(intimidation),
                                                                 leadership(leadership), streetwise(streetwise),
                                                                 subterfuge(subterfuge) {}

Talent::Talent() {}

int Talent::getAlertness() const {
    return alertness;
}

void Talent::setAlertness(int alertness) {
    Talent::alertness = alertness;
}

int Talent::getAthletics() const {
    return athletics;
}

void Talent::setAthletics(int athletics) {
    Talent::athletics = athletics;
}

int Talent::getAwareness() const {
    return awareness;
}

void Talent::setAwareness(int awareness) {
    Talent::awareness = awareness;
}

int Talent::getBrawl() const {
    return brawl;
}

void Talent::setBrawl(int brawl) {
    Talent::brawl = brawl;
}

int Talent::getEmpathy() const {
    return empathy;
}

void Talent::setEmpathy(int empathy) {
    Talent::empathy = empathy;
}

int Talent::getExpression() const {
    return expression;
}

void Talent::setExpression(int expression) {
    Talent::expression = expression;
}

int Talent::getIntimidation() const {
    return intimidation;
}

void Talent::setIntimidation(int intimidation) {
    Talent::intimidation = intimidation;
}

int Talent::getLeadership() const {
    return leadership;
}

void Talent::setLeadership(int leadership) {
    Talent::leadership = leadership;
}

int Talent::getStreetwise() const {
    return streetwise;
}

void Talent::setStreetwise(int streetwise) {
    Talent::streetwise = streetwise;
}

int Talent::getSubterfuge() const {
    return subterfuge;
}

void Talent::setSubterfuge(int subterfuge) {
    Talent::subterfuge = subterfuge;
}
