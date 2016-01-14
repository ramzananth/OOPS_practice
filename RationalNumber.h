/*
 * RationalNumber.h
 *
 *  Created on: Feb 28, 2014
 *      Author: ramyaananth
 */

#ifndef RATIONALNUMBER_H_
#define RATIONALNUMBER_H_

#include <fstream>

int numofdigits(int q);
int gcd(int a, int b);

class RationalNumber
{

private:
	int num, den;
	char* str;
	int num_dig;

	void reduction(int& n, int& d);

public:
	RationalNumber();
	RationalNumber(const int& a, const int& b);

	RationalNumber(const RationalNumber &w);

	RationalNumber& operator=(const RationalNumber &w);

	const RationalNumber operator+(const RationalNumber &w) const;
	const RationalNumber operator-(const RationalNumber &w) const;
	const RationalNumber operator*(const RationalNumber &w) const;
	const RationalNumber operator/(const RationalNumber &w) const;
	bool operator==(const RationalNumber &w) const;
	bool operator!=(const RationalNumber &w) const;
	bool operator>(const RationalNumber &w) const;
	bool operator<(const RationalNumber &w) const;
	bool operator>=(const RationalNumber &w) const;
	bool operator<=(const RationalNumber &w) const;

	friend std::ostream &operator<<( std::ostream &output, const RationalNumber &d );

	friend std::istream &operator>>( std::istream  &input, RationalNumber &d );

	~RationalNumber();


};

#endif /* RATIONALNUMBER_H_ */
