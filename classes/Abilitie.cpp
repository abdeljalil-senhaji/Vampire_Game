
#include "Abilitie.h"
//la definition des méthodes et et leur implémentation.
Abilitie::Abilitie(const Talent &telent, const Skill &skill, const Knowledge &knowledge) : telent(telent), skill(skill),
                                                                                           knowledge(knowledge) {}

Abilitie::Abilitie() {}

const Talent &Abilitie::getTelent() const {
    return telent;
}

void Abilitie::setTelent(const Talent &telent) {
    Abilitie::telent = telent;
}

const Skill &Abilitie::getSkill() const {
    return skill;
}

void Abilitie::setSkill(const Skill &skill) {
    Abilitie::skill = skill;
}

const Knowledge &Abilitie::getKnowledge() const {
    return knowledge;
}

void Abilitie::setKnowledge(const Knowledge &knowledge) {
    Abilitie::knowledge = knowledge;
}
