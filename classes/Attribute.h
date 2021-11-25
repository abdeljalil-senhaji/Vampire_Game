
#ifndef JALIL_ATTRIBUTE_H
#define JALIL_ATTRIBUTE_H


#include "Physical.h"
#include "Social.h"
#include "Mental.h"
//creation de la classe Attribute
class Attribute{
private:
    Physical physical;
    Social social;
    Mental mental;
public:
    Attribute();
    Attribute(const Physical &physical, const Social &social, const Mental &mental);

    virtual ~Attribute();

    const Physical &getPhysical() const;

    void setPhysical(const Physical &physical);

    const Social &getSocial() const;

    void setSocial(const Social &social);

    const Mental &getMental() const;

    void setMental(const Mental &mental);


};


#endif //JALIL_ATTRIBUTE_H
