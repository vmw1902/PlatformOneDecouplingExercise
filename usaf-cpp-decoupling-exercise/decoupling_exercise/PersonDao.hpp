//
//  PersonDaoImpl.hpp
//  test_gtest_2
//
//  Created by Kyle Griffin on 6/12/20.
//  Copyright © 2020 Kyle Griffin. All rights reserved.
//

#ifndef PersonDaoImpl_hpp
#define PersonDaoImpl_hpp

#include <stdio.h>
#include "Person.hpp"
#include <vector>

class PersonDao  {
public:
	PersonDao();
    void add(Person *p);
    Person* find(std::string name);
    void update(Person *p);
    void remove(Person *p);

private:
	std::vector<Person*> personDatabase;
	Person* copy(Person* p);
};


#endif /* PersonDaoImpl_hpp */
