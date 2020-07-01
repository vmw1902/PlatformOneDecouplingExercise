#pragma once
#include "Person.hpp"
class FireFighterPerson :
	public Person

{
public:
	friend ostream& operator<<(ostream& os, const FireFighterPerson& fireFighterPerson);
	FireFighterPerson(string name, int age);
	string toString() const;
};