#include "FireFighterPerson.h"

FireFighterPerson::FireFighterPerson(string name, int age) :Person(name, age)
{
}

string FireFighterPerson::toString() const {
	return "Firefighter "+ Person::toString();
}

ostream& operator<<(ostream& os, const FireFighterPerson& fireFighterPerson) {
	return os << fireFighterPerson.toString();
}