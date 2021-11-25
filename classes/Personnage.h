
#include <string>
#include "Clan.h"
#include "Attribute.h"
#include "Abilitie.h"
#include "Advantage.h"

#ifndef JALIL_PERSONNAGE_H
#define JALIL_PERSONNAGE_H

using namespace std;
//creation de la classe Personnage
class Personnage {
private:
    string name;
    Clan clan;
    Attribute attribute;
    Abilitie abilitie;
    Advantage advantage;
public:
    Personnage();//Constructeur de la classe Personnage

    Personnage(const string &name, const Clan &clan, const Attribute &attribute, const Abilitie &abilitie,
               const Advantage &advantage);

    const string &getName() const;

    void setName(const string &name);

    const Clan &getClan() const;

    void setClan(const Clan &clan);

    const Attribute &getAttribute() const;

    void setAttribute(const Attribute &attribute);

    const Abilitie &getAbilitie() const;

    void setAbilitie(const Abilitie &abilitie);

    const Advantage &getAdvantage() const;

    void setAdvantage(const Advantage &advantage);

};


#endif //JALIL_PERSONNAGE_H
