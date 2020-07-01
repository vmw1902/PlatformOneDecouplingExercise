#pragma once
#include "Person.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
class PolicePerson :
	public Person

{
public: 
	friend ostream& operator<<(ostream& os, const PolicePerson& policePerson);
	PolicePerson(string name, int age);
	string toString() const;
};

