
#include "PolicePerson.h"

PolicePerson::PolicePerson(string name, int age):Person(name, age)
{
}

string PolicePerson::toString() const {
	return "Officer " + Person::toString();
}

ostream& operator<<(ostream& os, const PolicePerson& policePerson) {
	return os << policePerson.toString();
}