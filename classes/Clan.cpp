
#include "Clan.h"
//la definition des méthodes et et leur implémentation.
Clan::Clan(const string &name, const string &description) : name(name), description(description) {}

Clan::Clan() {}

const string &Clan::getName() const {
    return name;
}

void Clan::setName(const string &name) {
    Clan::name = name;
}

const string &Clan::getDescription() const {
    return description;
}

void Clan::setDescription(const string &description) {
    Clan::description = description;
}
