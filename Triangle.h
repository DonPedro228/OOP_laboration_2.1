#pragma once
#include <cmath>
#include <string>

using namespace std;

class Triangle
{
private:
	double first;
	double second;
public:
	Triangle();
	Triangle(double, double);
	Triangle(const Triangle&);
	~Triangle();

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


	double GetFirst() const {
		return first;
	}

	double GetSecond() const {
		return second;
	}

	void SetFirst(double value);

	void SetSecond(double value);

	double hypotenuse() const;
	friend double my_sqrt(const Triangle&);
};

