/*
 * RationalNumber.cpp
 *
 *  Created on: Feb 28, 2014
 *      Author: Ramya Ananth - 180-92 OOPS
 */

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "RationalNumber.h"

using namespace std;


//Default constructor initializing member variables
RationalNumber::RationalNumber()
{
	num = 0; den = 1;
	num_dig = 0;
	str = NULL;
}

//Parameterised constructor
//checks for denominator to be not equal to 0
RationalNumber::RationalNumber(const int& a, const int& b)
{
	int num_dig = 0;
	num = a;
	den = b;
	if (den == 0)
	{
		cout<<"Please do not enter denominator as 0"<<endl;
		exit(1);
	}
	reduction(num,den);
	num_dig = numofdigits(num) + numofdigits(den) + 2;
	str = new char[num_dig];
	sprintf(str,"%d%s%d",num,"/",den);
	//cout<<"Value : "<<str<<endl;
}

//copy constructor
RationalNumber::RationalNumber(const RationalNumber &w)
{
	num = w.num;
	den = w.den;
	num_dig=w.num_dig;
	str = new char[w.num_dig];
	strcpy(str,w.str);
}

//Overloading assignment operator
//notes : return type has to be by reference
 RationalNumber& RationalNumber::operator=(const RationalNumber& w)
{

	if (this != &w)
	{
		num = w.num;
		den = w.den;

		num_dig=w.num_dig;

		if ( str != NULL )
		{
			delete[] str;
		}

		str = new char[w.num_dig];
		strcpy(str,w.str);
	}
	return *this;
}

 //Overloading + operator
 const RationalNumber RationalNumber::operator+(const RationalNumber &w) const
{

	int newNum = (num*w.den + den*w.num);
	int newDen = den*w.den;

	return RationalNumber(newNum,newDen);
}

 //Overloading - operator
 const RationalNumber RationalNumber::operator-(const RationalNumber &w) const
{

	int newNum = (num*w.den - den*w.num);
	int newDen = den*w.den;

	return RationalNumber(newNum,newDen);
}

 //Overloading * operator
 const RationalNumber RationalNumber::operator*(const RationalNumber &w) const
{

	int newNum = num*w.num;
	int newDen = den*w.den;

	return RationalNumber(newNum,newDen);
}

 //Overloading / operator
 const RationalNumber RationalNumber::operator/(const RationalNumber &w) const
{

	int newNum = num*w.den;
	int newDen = den*w.num;

	return RationalNumber(newNum,newDen);
}

 //Overloading == operator
 bool RationalNumber::operator==(const RationalNumber &w) const
{
	return (num == w.num && den == w.den);
}

 //Overloading != operator
 bool RationalNumber::operator!=(const RationalNumber &w) const
{
	return ((num != w.num) && (den != w.den));
}

 //Overloading > operator
 bool RationalNumber::operator>(const RationalNumber &w) const
{
	return (num*w.den > den*w.num);
}

 //Overloading < operator
 bool RationalNumber::operator<(const RationalNumber &w) const
{
	return (num*w.den < den*w.num);
}

 //Overloading >= operator
 bool RationalNumber::operator>=(const RationalNumber &w) const
{
	return (num*w.den > den*w.num || (num == w.num && den == w.den));

}

 //Overloading <= operator
 bool RationalNumber::operator<=(const RationalNumber &w) const
{
	return (num*w.den < den*w.num || (num == w.num && den == w.den));
}

 //Calculating total number of digits to allocate memory for str
int numofdigits(int q)
{
	int count = 0;

	while(q!=0)
	{
		q = q/10;
		count++;
	}
	return count;
}

//Reducing to the smallest fraction
void RationalNumber::reduction(int& n, int& d)
{
	int divisor = gcd(n,d);
	n = n/divisor;
	d = d/divisor;
}

//to find GCD of numerator and denominator
int gcd(int a, int b)
{
	if (b==0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}

//destructor to deallocate memory for str
RationalNumber::~RationalNumber()
{
	delete[] str;
}

//overload << operator
std::ostream &operator<<( std::ostream &output,
		const RationalNumber &d )
{
	output << d.num << "/" << d.den;
	return output;
}

//overload >> operator
std::istream &operator>>( std::istream  &inputStream, RationalNumber &d )
{
	int num,den;
	inputStream >> num;
	inputStream.ignore(1);
	inputStream >> den;
	d = RationalNumber(num,den);
	return inputStream;
}






