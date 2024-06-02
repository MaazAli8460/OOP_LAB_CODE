/*
 * Department.h
 *
 *  Created on: Apr 18, 2023
 *      Author: maaz
 */

#ifndef DEPARTMENT_H_
#define DEPARTMENT_H_
#include"Professor.h"
#include<string>
#include<iostream>
using namespace std;

class Department {
private:
	int deptid;
	string name;
	Professor  *p1;
public:
	Department();
	Department(int id1,string na);
	~Department();
	Department(const Department &other);
	int getDeptid() const;
	void setDeptid(int deptid);
	const string& getName() const;
	void setName(const string &name);
	 Professor& getP1() ;
	void setP1(Professor &p1);
};

#endif /* DEPARTMENT_H_ */
