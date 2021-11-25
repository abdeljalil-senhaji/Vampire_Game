

#ifndef JALIL_TALENT_H
#define JALIL_TALENT_H

//creation de la classe Talent
class Talent {
private:
    int alertness;
    int athletics;
    int awareness;
    int brawl;
    int empathy;
    int expression;
    int intimidation;
    int leadership;
    int streetwise;
    int subterfuge;
public:
    Talent();//Constructeur de la classe Talent
    Talent(int alertness, int athletics, int awareness, int brawl, int empathy, int expression, int intimidation,
           int leadership, int streetwise, int subterfuge);

    int getAlertness() const;

    void setAlertness(int alertness);

    int getAthletics() const;

    void setAthletics(int athletics);

    int getAwareness() const;

    void setAwareness(int awareness);

    int getBrawl() const;

    void setBrawl(int brawl);

    int getEmpathy() const;

    void setEmpathy(int empathy);

    int getExpression() const;

    void setExpression(int expression);

    int getIntimidation() const;

    void setIntimidation(int intimidation);

    int getLeadership() const;

    void setLeadership(int leadership);

    int getStreetwise() const;

    void setStreetwise(int streetwise);

    int getSubterfuge() const;

    void setSubterfuge(int subterfuge);
};


#endif //JALIL_TALENT_H
