
#include "Social.h"

Social::Social(int charisma, int manipulation, int appearance) : charisma(charisma), manipulation(manipulation),
                                                                 appearance(appearance) {}
//la definition des méthodes et et leur implémentation.
Social::Social() {}

int Social::getCharisma() const {
    return charisma;
}

void Social::setCharisma(int charisma) {
    Social::charisma = charisma;
}

int Social::getManipulation() const {
    return manipulation;
}

void Social::setManipulation(int manipulation) {
    Social::manipulation = manipulation;
}

int Social::getAppearance() const {
    return appearance;
}

void Social::setAppearance(int appearance) {
    Social::appearance = appearance;
}
