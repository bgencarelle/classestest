/*
 * CFraction.cpp
 *
 *  Created on: 07.05.2017
 *      Author: ben
 */
#include "CFraction.h"

using namespace std;

CFraction::CFraction()
{
	m_nN = 0;
	m_nD = 1;
}

void CFraction::setNumerator(int nN)
{
	m_nN = nN;
}

bool CFraction::setDenominator(int nD)
{
	if (nD == 0)
	{
		return false;
	}
	else
	{
		m_nD = nD;
		return true;
	}

}

bool CFraction::isInteger()
{
	if (m_nN % m_nD)
	{
		cout << "	nicht echt	"<< endl;
		return false;
	}
	else
	{
		cout << "	echt	"<< endl;
		return true;
	}
}

bool CFraction::isProper()
{
	if (abs(m_nN) >= abs(m_nD))
	{
		cout << "		nicht gannzahlig  ";
	return false;
	}
	else
	{
		cout << "		gannzahlig  ";
		return true;
	}

}

void CFraction::addInteger(int nValue)
{
	m_nN = (nValue*m_nD)+m_nN;
}

float CFraction::transform2float()
{
	float n =  (float)m_nN/(float)m_nD;
	return n;
}

void CFraction::print()
{
	float n = transform2float();
	cout << "fract:" << m_nN << "/" << m_nD << "	"<< "	(dec:" << n << ")  ";
	isProper();
	isInteger();

}
