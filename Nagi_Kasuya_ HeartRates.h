#ifndef HEARTRATE_H_
#define HEARTRATE_H_
#include<string>
using namespace std;

class HeartRates 
{
public:
	HeartRates(string firstname, string lastname, int m, int d, int y);

	void setFirstName(string firstname);

	void setLastName(string lastname);

	void setMonthOfBirth(int m);

	void setDayOfBirth(int d);

	void setYearOfBirth(int y);

	string getFirstName();

	string getLastName();

	int getMonthOfBirth();

	int getDayOfBirth();

	int getYearOfBirth();

	int getAge(int currentmonth, int currentday, int currentyear);

	int getMaximumHeartRate(int age);

	int getTargetHeartRatemax(int age);

	int getTargetHeartRatemin(int age);

private:
	string FirstName;
	string LastName;
	int monthofbirth;
	int dayofbirth;
	int yearofbirth;
};

#endif
