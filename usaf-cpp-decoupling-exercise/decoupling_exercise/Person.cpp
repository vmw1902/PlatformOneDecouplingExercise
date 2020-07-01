//
//  person.cpp
//  test_gtest_2
//
//  Created by Kyle Griffin on 6/12/20.
//  Copyright © 2020 Kyle Griffin. All rights reserved.
//

#include <sstream>
#include <iostream>
#include "Person.hpp"
#include "PersonDao.hpp"

Person::Person(string name, int age)  {
    this->name = name;
    this->age = age;
}

Person::~Person(){
    //nothing to do
}
void Person::setName(string newName) {
	this->name = newName;
}

string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    this->age = age;
}

string Person::toString() const {
    std::ostringstream oss;
    oss << name << " is " << age << " years old.";
    return oss.str();
}

ostream& operator<<(ostream& os, const Person& person) {
    return os << person.toString();
}
