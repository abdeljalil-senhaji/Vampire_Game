

#ifndef JALIL_SOCIAL_H
#define JALIL_SOCIAL_H

//creation de la classe Social
class Social {
private:
    int charisma;
    int manipulation;
    int appearance;
public:
    Social(int charisma, int manipulation, int appearance);

    Social();

    int getCharisma() const;

    void setCharisma(int charisma);

    int getManipulation() const;

    void setManipulation(int manipulation);

    int getAppearance() const;

    void setAppearance(int appearance);
};


#endif //JALIL_SOCIAL_H
