/*
 * University.h
 *
 *  Created on: Apr 18, 2023
 *      Author: maaz
 */

#ifndef UNIVERSITY_H_
#define UNIVERSITY_H_
#include"Department.h"
#include<string>
#include<iostream>
using namespace std;
class University {
private:
	string name;
	Department *d1;
public:
	University();
	University(string na);
	~University();
	University(const University &other);
	const Department* getD1() const;
	void setD1(Department &d1t);
	const string& getName() const;
	void setName(const string &name);
	bool addDepartment(Department &D);
	bool deleteDepartment(string name);
	bool updateDepartment(int id, string name); //Update name of department given department id.
};

#endif /* UNIVERSITY_H_ */
