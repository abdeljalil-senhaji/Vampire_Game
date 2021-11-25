

#ifndef JALIL_SKILL_H
#define JALIL_SKILL_H

//creation de la classe Skill
class Skill {
private:
    int animalKen;
    int crafts;
    int drive;
    int etiquette;
    int firearms;
    int larceny;
    int melee;
    int performance;
    int stealth;
    int survival;
public:
    int getAnimalKen() const;

    void setAnimalKen(int animalKen);

    int getCrafts() const;

    void setCrafts(int crafts);

    int getDrive() const;

    void setDrive(int drive);

    int getEtiquette() const;

    void setEtiquette(int etiquette);

    int getFirearms() const;

    void setFirearms(int firearms);

    int getLarceny() const;

    void setLarceny(int larceny);

    int getMelee() const;

    void setMelee(int melee);

    int getPerformance() const;

    void setPerformance(int performance);

    int getStealth() const;

    void setStealth(int stealth);

    int getSurvival() const;

    void setSurvival(int survival);

    Skill();
    Skill(int animalKen, int crafts, int drive, int etiquette, int firearms, int larceny, int melee, int performance,
          int stealth, int survival);

};


#endif //JALIL_SKILL_H
