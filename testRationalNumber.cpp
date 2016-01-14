/*
 * testRationalNumber.cpp
 *
 *  Created on: Feb 28, 2014
 *      Author: ramyaananth
 */
#include <iostream>
#include <String.h>
#include <stdlib.h>
#include "RationalNumber.h"

using namespace std;
int main()
{
	cout<<"*** RationalNumber Class by Ramya Ananth ***"<<endl;
	RationalNumber A;
	cout<<"Enter Rational Number for A : ";
	cin>>A;
	cout<<"A = "<<A<<endl;
	RationalNumber B;
	cout<<"Enter Rational Number for B : ";
	cin>>B;
	cout<<"B = "<<B<<endl;

	cout<<"Addition operator overloading A + B :"<<endl;
	RationalNumber C = A + B;
	cout<<A<<" + "<<B<<" = "<<C<<endl;

	cout<<"Subtraction operator overloading A - B :"<<endl;
	RationalNumber D = A - B;
	cout<<A<<" - "<<B<<" = "<<D<<endl;

	cout<<"Multiply operator overloading A * B :"<<endl;
	RationalNumber E = A * B;
	cout<<A<<" * "<<B<<" = "<<E<<endl;

	cout<<"Divide operator overloading A / B :"<<endl;
	RationalNumber F = A / B;
	cout<<A<<" / "<<B<<" = "<<F<<endl;

	RationalNumber G;
	cout<<"Assignment operator overloading : G = A"<<endl;
	G = A;
	cout<<"Value of G = "<<G<<endl;

	cout<<"Calling copy constructor : Copy B to H"<<endl;
	RationalNumber H(B);
	cout<<"Value of H = "<<H<<endl;

	cout<<"Equality operator overloading :"<<endl;
	if (A == G)
	{
		cout<<"A = "<<A<<" G = "<<G<<endl;
		cout<<"A equals G"<<endl;
	}
	else
	{
		cout<<"A = "<<A<<" G = "<<G<<endl;
		cout<<"A does not equal G"<<endl;
	}

	cout<<"Non Equality operator overloading :"<<endl;
	if (A != B)
	{
		cout<<"A = "<<A<<" B = "<<B<<endl;
		cout<<"A equals B"<<endl;
	}
	else
	{
		cout<<"A = "<<A<<" B = "<<B<<endl;
		cout<<"A does not equal B"<<endl;
	}

	cout<<"> operator overloading :"<<endl;
	if (C > D)
	{
		cout<<"C = "<<C<<" D = "<<D<<endl;
		cout<<"C greater than D"<<endl;
	}
	else
	{
		cout<<"C = "<<C<<" D = "<<D<<endl;
		cout<<"C not greater than D"<<endl;
	}

	cout<<"< operator overloading :"<<endl;
	if (E < F)
	{
		cout<<"E = "<<E<<" F = "<<F<<endl;
		cout<<"E lesser than F"<<endl;
	}
	else
	{
		cout<<"E = "<<E<<" F = "<<F<<endl;
		cout<<"E not lesser than F"<<endl;
	}

	cout<<"<= operator overloading :"<<endl;
	if (A <= B)
	{
		cout<<"A = "<<A<<" B = "<<B<<endl;
		cout<<"A lesser than or equal to B"<<endl;
	}
	else
	{
		cout<<"A = "<<A<<" B = "<<B<<endl;
		cout<<"A not lesser than or equal to B"<<endl;
	}

	cout<<">= operator overloading :"<<endl;
	if (A >= G)
	{
		cout<<"A = "<<A<<" G = "<<G<<endl;
		cout<<"A greater than or equal to G"<<endl;
	}
	else
	{
		cout<<"A = "<<A<<" G = "<<G<<endl;
		cout<<"A not greater than or equal to G"<<endl;
	}


// c = a + b;//correct usage
// a + b = c;// note wrong usage

	return 0;
}



