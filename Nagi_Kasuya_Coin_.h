#ifndef COIN_H
#define COIN_H
#include<string>

using namespace std;

//Make each memberfunction and object as prvate and public
class Coin 
{
private:
	string sideUp;

public: 
	Coin();
	void toss();
	string getSideUp();
};

#endif



