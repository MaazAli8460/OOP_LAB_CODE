/*
 * Parking.cpp
 *
 *  Created on: Mar 21, 2023
 *      Author: maaz
 */

#include "Parking.h"
int Parking::Count=0;
Parking::Parking() {
	// TODO Auto-generated constructor stub
	time=0;
	slot=0;
	reg=0;
	gar_max=5;
	gar_current=0;
	car_time=0;//20rs per hour
	car_slot=1;
	car_reg=2;
	remove=0;
	gar=new int* [5];
	for(int i=0;i<gar_max;i++)
			{
				gar[i]=new int[3];
			}

}
int Parking::getCarReg(){
	return reg;
}

void Parking::setCarReg(int carReg) {
	reg = carReg;
}
int Parking::getCarSlot() {
	return slot;
}

void Parking::setCarSlot(int carSlot) {
	slot = carSlot;
}

int Parking::getCarTime() {
	return time;
}

void Parking::setCarTime(int carTime) {
	time = carTime;
}

int Parking::getCount(){
	return Count;
}


int** Parking::getGar()  {
	return gar;
}

bool Parking::isfull()
{
	if(gar_current<gar_max)
	{
		return false;
	}
	else
		return true;
}
void Parking::setGar() {
	if(isfull()==false)
	{
		gar[gar_current][0]=time;
		gar[gar_current][1]=slot;
		gar[gar_current][2]=reg;
	}

}
void Parking::free(int ch)
{
	if(ch==remove)
	{
		charge(ch)
	}
}

void Parking::charge(int ch)
{

}
int Parking::getGarCurrent() {
	return gar_current;
}

void Parking::setGarCurrent(int garCurrent) {
	gar_current = garCurrent;
}
Parking::~Parking() {
	// TODO Auto-generated destructor stub
	for(int i=0;i<gar_max;i++)
			{
				delete [] arr[3];
			}
}


