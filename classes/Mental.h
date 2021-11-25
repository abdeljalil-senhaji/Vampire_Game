

#ifndef JALIL_MENTAL_H
#define JALIL_MENTAL_H

//creation de la classe Mental
class Mental {
private:
    int perception;
    int intelligence;
    int wits;
public:
    Mental();
    Mental(int perception, int intelligence, int wits);
    int getPerception() const;
    void setPerception(int perception);
    int getIntelligence() const;
    void setIntelligence(int intelligence);
    int getWits() const;
    void setWits(int wits);
};


#endif //JALIL_MENTAL_H
