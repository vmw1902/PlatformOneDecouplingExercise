//
//  PersonDaoImpl.cpp
//  test_gtest_2
//
//  Created by Kyle Griffin on 6/12/20.
//  Copyright © 2020 Kyle Griffin. All rights reserved.
//

#include "Person.hpp"
#include "PersonDao.hpp" 

void PersonDao::save(Person *p_ptr) {
    cout << "saved: " << *p_ptr << endl;
}

void PersonDao::update(Person *p_ptr) {
    cout << "updating: " << *p_ptr << endl;
}

void PersonDao::remove(Person *p_ptr) {
    cout << "removing: " << *p_ptr << endl;
}

Person PersonDao::find(string name) {
    Person p("Fred", 50);
    cout << "found: " << p << endl;
    return p;
}
