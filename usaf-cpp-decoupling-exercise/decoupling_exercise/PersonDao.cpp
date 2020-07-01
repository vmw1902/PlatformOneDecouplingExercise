//
//  PersonDaoImpl.cpp
//  test_gtest_2
//
//  Created by Kyle Griffin on 6/12/20.
//  Copyright © 2020 Kyle Griffin. All rights reserved.
//

#include "Person.hpp"
#include "PersonDao.hpp" 
#include "FireFighterPerson.h"

PersonDao::PersonDao()
{
}

void PersonDao::add(Person *p_ptr) {
	//copy person into next available index
	Person* ourCopy = copy(p_ptr);
	personDatabase.push_back(ourCopy);
    cout << "added: " << p_ptr->getName() << endl;
}

void PersonDao::update(Person *p_ptr) {
    cout << "updating: " << *p_ptr << endl;
}

void PersonDao::remove(Person *p_ptr) {
	for (std::vector<Person*>::iterator it = personDatabase.begin(); it != personDatabase.end(); ++it) {
		if ((*it)->getName() == p_ptr->getName()) {
			cout << "removing: " << p_ptr->getName() << endl;
			personDatabase.erase(it);
			return;
		}
	}
}

Person* PersonDao::copy(Person * p)
{
	Person* newPersonPtr = new Person(p->getName(), p->getAge());
	return newPersonPtr;
}

Person* PersonDao::find(string name) {
	for (std::vector<Person*>::iterator it = personDatabase.begin(); it != personDatabase.end(); ++it) {
		if ((*it)->getName() == name) {
			cout << "found: " << name << endl;
			return *it;
		}
	}
	cout << name + " not found" << endl;
	return NULL;
}
