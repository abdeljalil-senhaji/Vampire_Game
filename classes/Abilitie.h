

#ifndef JALIL_ABILITIE_H
#define JALIL_ABILITIE_H


#include "Talent.h"
#include "Skill.h"
#include "Knowledge.h"
//creation de la classe Abilitie
class Abilitie {
private:
    Talent telent;
    Skill skill;
    Knowledge knowledge;
public:
    Abilitie();
    Abilitie(const Talent &telent, const Skill &skill, const Knowledge &knowledge);
    const Talent &getTelent() const;

    void setTelent(const Talent &telent);// Méthodes

    const Skill &getSkill() const;

    void setSkill(const Skill &skill);// Méthodes

    const Knowledge &getKnowledge() const;

    void setKnowledge(const Knowledge &knowledge);// Méthodes

};


#endif //JALIL_ABILITIE_H
