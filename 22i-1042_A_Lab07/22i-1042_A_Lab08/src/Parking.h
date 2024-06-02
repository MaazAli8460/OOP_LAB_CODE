/*
 * Parking.h
 *
 *  Created on: Mar 21, 2023
 *      Author: maaz
 */

#ifndef PARKING_H_
#define PARKING_H_

class Parking {
private:
	int gar_max;
	int gar_current;
	int car_time;//20rs per hour
	int car_slot;
	int car_reg;
	int time;
	int reg;
	int slot;
	int **gar;
	int remove;
	static int Count;
public:
	Parking();
	~Parking();

	int getCarReg();

	void setCarReg(int carReg) ;

	int getCarSlot() ;

	void setCarSlot(int carSlot);

	int getCarTime() ;
	void setCarTime(int carTime);

	static int getCount();

	int** getGar();

	void setGar();

	bool isfull();

	void free(int );

	void charge(int );

	int getGarCurrent() ;

	void setGarCurrent(int garCurrent) ;
};

#endif /* PARKING_H_ */
