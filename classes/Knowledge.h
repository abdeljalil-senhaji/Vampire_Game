

#ifndef JALIL_KNOWLEDGE_H
#define JALIL_KNOWLEDGE_H

//creation de la classe Knowledge
class Knowledge {
private:
    int academics;
    int computer;
    int finance;
    int investigation;
    int law;
    int medicine;
    int occult;
    int politics;
    int science;
    int technology;
public:
    Knowledge();

    Knowledge(int academics, int computer, int finance, int investigation, int law, int medicine, int occult,
              int politics, int science, int technology);

    int getAcademics() const;

    void setAcademics(int academics);

    int getComputer() const;

    void setComputer(int computer);

    int getFinance() const;

    void setFinance(int finance);

    int getInvestigation() const;

    void setInvestigation(int investigation);

    int getLaw() const;

    void setLaw(int law);

    int getMedicine() const;

    void setMedicine(int medicine);

    int getOccult() const;

    void setOccult(int occult);

    int getPolitics() const;

    void setPolitics(int politics);

    int getScience() const;

    void setScience(int science);

    int getTechnology() const;

    void setTechnology(int technology);
};


#endif //JALIL_KNOWLEDGE_H
