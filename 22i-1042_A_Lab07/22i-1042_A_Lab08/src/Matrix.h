/*
 * Matrix.h
 *
 *  Created on: Mar 21, 2023
 *      Author: maaz
 */

#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix {
private:
	int rows;
	int columns;
	int **arr;
public:
	Matrix();

	Matrix(int r, int c, int** p);

	~Matrix();

	void multiplyMatrix(int);

	void addMatrix(int);

	void display();

	Matrix(Matrix &o);

	int** getArr() ;

	void setArr(int **arr1);

	int getColumns() ;

	void setColumns(int columns) ;

	int getRows() ;


	void setRows(int rows) ;
};

#endif /* MATRIX_H_ */
