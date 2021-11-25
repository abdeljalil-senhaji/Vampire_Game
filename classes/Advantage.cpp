
#include "Advantage.h"
//la definition des méthodes et et leur implémentation.
Advantage::Advantage() {}

Advantage::Advantage(const vector<string> &disciplines, const vector<string> &backgrounds, int conscience,
                     int selControl, int courage) : disciplines(disciplines), backgrounds(backgrounds),
                                                    conscience(conscience), selControl(selControl), courage(courage) {}

const vector<string> &Advantage::getDisciplines() const {
    return disciplines;
}

void Advantage::setDisciplines(const vector<string> &disciplines) {
    Advantage::disciplines = disciplines;
}

const vector<string> &Advantage::getBackgrounds() const {
    return backgrounds;
}

void Advantage::setBackgrounds(const vector<string> &backgrounds) {
    Advantage::backgrounds = backgrounds;
}

int Advantage::getConscience() const {
    return conscience;
}

void Advantage::setConscience(int conscience) {
    Advantage::conscience = conscience;
}

int Advantage::getSelControl() const {
    return selControl;
}

void Advantage::setSelControl(int selControl) {
    Advantage::selControl = selControl;
}

int Advantage::getCourage() const {
    return courage;
}

void Advantage::setCourage(int courage) {
    Advantage::courage = courage;
}
