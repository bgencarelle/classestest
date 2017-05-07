/*
 * CFraction.h
 *
 *  Created on: 07.05.2017
 *      Author: ben
 */
#include <stdlib.h>
#include <iostream>		// Header für die Standard-IO-Objekte (z.B. cout, cin)
#include <cmath>

#ifndef CFRACTION_H_
#define CFRACTION_H_

class CFraction
{
private:
 int m_nN;
 int m_nD;

public:
CFraction();
void setNumerator(int nN);
bool setDenominator(int nD);
bool isInteger();
bool isProper();
void addInteger(int nValue);
float transform2float();
void print();
};


#endif /* CFRACTION_H_ */
