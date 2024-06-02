/*
 * Professor.cpp
 *
 *  Created on: Apr 18, 2023
 *      Author: maaz
 */

#include "Professor.h"

Professor::Professor() {
	name=" ";
	id=0;
	desig=" ";

}
Professor::Professor(int i, string na, string ds)
{
	name=na;
		id=i;
		desig=ds;
}

Professor::~Professor() {
	// TODO Auto-generated destructor stub
}

const string& Professor::getDesigation() const {
	return desig;
}

void Professor::setDesigation(const string &desigation) {
	desig = desigation;
}

int Professor::getId() const {
	return id;
}

void Professor::setId(int id) {
	this->id = id;
}

const string& Professor::getName() const {
	return name;
}

void Professor::setName(const string &name) {
	this->name = name;
}

Professor::Professor(const Professor &other) {
	name=other.name;
	id=other.id;
	desig=other.desig;

}

