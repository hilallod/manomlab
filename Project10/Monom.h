#pragma once

#include "pch.h"

struct TMonom {
	double coeff;
	int PowX, PowY, PowZ;
};

bool operator == (const TMonom& m1, const TMonom& m2) {
	if (m1.PowX == m2.PowX&&m1.PowY == m2.PowY&&m1.PowZ == m2.PowZ)
		return true;
	else
		return false;
}

bool operator >= (const TMonom& m1, const TMonom& m2) {
	if (m1 == m2)return true;
	else if (m1.PowX > m2.PowX)return true;
	else if (m1.PowY > m2.PowY)return true;
	else if (m1.PowZ > m2.PowZ)return true;
	else
		return false;
}

bool operator <=(const TMonom& m1, const TMonom& m2) {
	if (m1 == m2)return true;
	else if (m1.PowX < m2.PowX)return true;
	else if (m1.PowY < m2.PowY)return true;
	else if (m1.PowZ < m2.PowZ)return true;
	else
		return false;
}

bool operator != (const TMonom& m1, const TMonom& m2) {
	return !(m1 == m2);
}

bool operator > (const TMonom& m1, const TMonom& m2) {
	if (m1.PowX > m2.PowX)return true;
	else if (m1.PowY > m2.PowY)return true;
	else if (m1.PowZ > m2.PowZ)return true;
	else
		return false;
}

bool operator < (const TMonom& m1, const TMonom& m2) {
	if (m1.PowX < m2.PowX)return true;
	else if (m1.PowY < m2.PowY)return true;
	else if (m1.PowZ < m2.PowZ)return true;
	else
		return false;
}