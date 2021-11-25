

#ifndef JALIL_PHYSICAL_H
#define JALIL_PHYSICAL_H

//creation de la classe Physical
class Physical {
private:
    int strength;
    int dexterity;
    int stamina;
public:
    Physical(int strength, int dexterity, int stamina);
    Physical();
    virtual ~Physical();
    int getStrength() const;

    void setStrength(int strength);

    int getDexterity() const;

    void setDexterity(int dexterity);

    int getStamina() const;

    void setStamina(int stamina);

public:

};


#endif //JALIL_PHYSICAL_H
