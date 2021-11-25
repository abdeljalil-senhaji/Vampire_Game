
#include <string>
#include <vector>
#ifndef JALIL_ADVANTAGE_H
#define JALIL_ADVANTAGE_H

using namespace std;
//creation de la classe Advantage
class Advantage {
private:
    vector<string>disciplines;
    vector<string>backgrounds;
    int conscience;
    int selControl;
    int courage;
public:
    Advantage();
    Advantage(const vector<string> &disciplines, const vector<string> &backgrounds, int conscience, int selControl,
              int courage);

    const vector<string> &getDisciplines() const;

    void setDisciplines(const vector<string> &disciplines);

    const vector<string> &getBackgrounds() const;

    void setBackgrounds(const vector<string> &backgrounds);

    int getConscience() const;

    void setConscience(int conscience);

    int getSelControl() const;

    void setSelControl(int selControl);

    int getCourage() const;

    void setCourage(int courage);
};


#endif //JALIL_ADVANTAGE_H
