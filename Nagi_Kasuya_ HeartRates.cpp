#include<iostream>
#include<ctime>
#include<time.h>
#include<string>
#include "HeartRates.h"

using namespace std;

//Constroctor
HeartRates::HeartRates(string firstname, string lastname, int m, int d, int y)
{
	setFirstName(firstname);
	setLastName(lastname);
	setMonthOfBirth(m);
	setDayOfBirth(d);
	setYearOfBirth(y);
}

void HeartRates::setFirstName(string firstname)
{
	FirstName = firstname;
}

void HeartRates::setLastName(string lastname)
{
	LastName = lastname;
}

void HeartRates::setMonthOfBirth(int m)
{
	monthofbirth = m;
}

void HeartRates::setDayOfBirth(int d)
{
	dayofbirth = d;
}

void HeartRates::setYearOfBirth(int y)
{
	yearofbirth = y;
}

string HeartRates::getFirstName()
{
	return FirstName;
}

string HeartRates::getLastName()
{
	return LastName;
}

int HeartRates::getMonthOfBirth()
{
	return monthofbirth;
}

int HeartRates::getDayOfBirth()
{
	return dayofbirth;
}

int HeartRates::getYearOfBirth()
{
	return yearofbirth;
}

int HeartRates::getAge(int currentmonth, int currentday, int currentyear) 
{

	int monthdiff = currentmonth - getMonthOfBirth();

	int daydiff = currentday - getDayOfBirth();

	int yeardiff = currentyear - getYearOfBirth();
	
	int totaldaydiff = daydiff + monthdiff * 30 + yeardiff * 365;

	int yeartotaldiff = totaldaydiff / 365;

	return yeartotaldiff;
}

//Caluculate code(Get function) for min-max heart rate, and Maximum heartrate
int HeartRates::getMaximumHeartRate(int age)
{
	return (220 - age);
}

int HeartRates::getTargetHeartRatemax(int age)
{

	int max = getMaximumHeartRate(age) * 85 / 100;

	return max;
}

int HeartRates::getTargetHeartRatemin(int age)
{

	int min = getMaximumHeartRate(age) * 50 / 100;

	return min;
}