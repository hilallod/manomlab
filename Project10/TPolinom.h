#pragma once
#include<iostream>

#include "HeadList.h"
#include "Monom.h"

class TPolinom :public THeadList<TMonom> {
public:
	void InsMonom(const TMonom &n);
	void operator *=(double d);
	void operator *=(TMonom &n);
	void operator +=(TMonom &n) { InsMonom(n); }
	void operator +=(TPolinom &n);
	TPolinom & operator = (const TPolinom& n);
};