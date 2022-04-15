#pragma once

#include <iostream>
using namespace std;
class Triangle
{
	double first, second;

public:
	Triangle();
	Triangle(double, double);
	Triangle(const Triangle&);
	~Triangle();
	double Gipotenuza();
	void Set_First(double);
	void Set_Second(double);
	double Get_First() const;
	double Get_Second() const;
	Triangle& operator = (const Triangle&);
	operator string() const;
	friend Triangle operator + (const Triangle&, const Triangle&);
	friend Triangle operator - (const Triangle&, const Triangle&);
	friend Triangle operator * (const Triangle&, const Triangle&);
	friend Triangle operator / (const Triangle&, const Triangle&);
	friend Triangle operator ^ (const Triangle&, const unsigned);
	friend ostream& operator << (ostream&, const Triangle&);
	friend istream& operator >> (istream&, Triangle&);
	Triangle& operator ++();
	Triangle& operator --();
	Triangle operator ++(int);
	Triangle operator --(int);
	
};