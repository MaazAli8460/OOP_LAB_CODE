/*
 * University.cpp
 *
 *  Created on: Apr 18, 2023
 *      Author: maaz
 */

#include "University.h"

University::University() {
	// TODO Auto-generated constructor stub
	name="";
	d1 = nullptr;

}
University::University(string na)
{
	name=na;

}
University::~University() {
	// TODO Auto-generated destructor stub
}

const Department* University::getD1() const {
	return d1;
}

void University::setD1(Department &d1t) {
	d1 = &d1t;
}

const string& University::getName() const {
	return name;
}

void University::setName(const string &name) {
	this->name = name;
}

University::University(const University &other) {
	// TODO Auto-generated constructor stub

}
bool University::addDepartment(Department &D)
{
	d1 = &D;
	return true;

}
	bool University:: deleteDepartment(string name)
	{
		this->name=name;
		d1=nullptr;
	}
	bool University::updateDepartment(int id, string name) //Update name of department given department id.
	{


	}

