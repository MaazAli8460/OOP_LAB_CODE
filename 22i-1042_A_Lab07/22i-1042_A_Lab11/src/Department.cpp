/*
 * Department.cpp
 *
 *  Created on: Apr 18, 2023
 *      Author: maaz
 */

#include "Department.h"

Department::Department() {
 name=" ";
 deptid=0;
 p1=nullptr;
}
Department::Department(int id1,string na)
{

	name=na;
	deptid=id1;
}
Department::~Department() {
	// TODO Auto-generated destructor stub
}

int Department::getDeptid() const {
	return deptid;
}

void Department::setDeptid(int deptid) {
	this->deptid = deptid;
}

const string& Department::getName() const {
	return name;
}

void Department::setName(const string &name) {
	this->name = name;
}

Professor& Department::getP1(){
	//return p1;
}

void Department::setP1(Professor &pcpy) {
	*p1 = pcpy;
}

Department::Department(const Department &other) {
	// TODO Auto-generated constructor stub

}

