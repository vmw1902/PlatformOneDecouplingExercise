//
//  MainBeforeMock.cpp
//  test_gtest_2
//
//  Created by Kyle Griffin on 6/12/20.
//  Copyright © 2020 Kyle Griffin. All rights reserved.
//

#include <stdio.h>
#include "Person.hpp"
#include "PersonDao.hpp"
#include "PolicePerson.h"
#include "FireFighterPerson.h"

using namespace std;

int main(int argc, char* argv[]) {
    PolicePerson p("Dave", 40);
	cout << p << endl;
	PersonDao dao;
	dao.add(&p);
    p.setAge(41);
    dao.update(&p);
    Person* q = dao.find("Dave");
    dao.remove(&p);
    Person* r = dao.find("Dave");
}
