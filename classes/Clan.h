
#include <string>
#ifndef JALIL_CLAN_H
#define JALIL_CLAN_H

using namespace std;
//creation de la classe Clan
class Clan {
private:
 string  name;
 string description;
public:
    Clan(const string &name, const string &description);
    Clan();//Constructeur de la classe clan

    const string &getName() const;

    void setName(const string &name);

    const string &getDescription() const;

    void setDescription(const string &description);
};


#endif //JALIL_CLAN_H
