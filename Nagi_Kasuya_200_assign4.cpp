#include<iostream>
#include<string>
#include"HeartRates.h"

using namespace std;

int main()
{
	//declare variable
	string firstname;
	string lastname;
	int m;
	int d;
	int y;

	//Get user's first and last name
	cout << "Please enter first and last name (separated by spaces):";
	cin >> firstname >> lastname;

	cout << "Please enter month, day, and year of birth (separated by spaces)";
	cin >> m >> d >> y;

	HeartRates people(firstname, lastname, m, d, y);

	cout << "First Name: " << people.getFirstName() << endl;
	cout << "Last Name: " << people.getLastName() << endl;
	cout << "Date of birth: " << m << "/" << d << "/" << y << endl;

	//Get today's month, day, and year
	cout << "Please enter today's month, day, and year:";
	cin >> m >> d >> y;

	//Get Age
	int peopleAge = people.getAge(m, d, y);

	//Get max heart rate
	int maxheart = people.getTargetHeartRatemax(peopleAge);

	//Get min heart rate
	int minheart = people.getTargetHeartRatemin(peopleAge);

	//Get maximum heart rate
	int maximumheartrate = people.getMaximumHeartRate(peopleAge);

	//Output result
	cout << "Age: " << peopleAge << endl;
	cout << "Maximumheartrate: " << maximumheartrate << endl;
	cout << "Target heart rate: " << minheart << "-" << maxheart << endl;
}