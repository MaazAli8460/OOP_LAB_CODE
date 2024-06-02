/*
 * Professor.h
 *
 *  Created on: Apr 18, 2023
 *      Author: maaz
 */

#ifndef PROFESSOR_H_
#define PROFESSOR_H_
#include<string>
#include<iostream>
using namespace std;

class Professor {
private:
	int id;
	string name;
	string desig;
public:
	Professor();
	Professor(int i, string na, string ds);
	~Professor();
	Professor(const Professor &other);
	const string& getDesigation() const;
	void setDesigation(const string &desigation);
	int getId() const;
	void setId(int id);
	const string& getName() const;
	void setName(const string &name);
};

#endif /* PROFESSOR_H_ */
