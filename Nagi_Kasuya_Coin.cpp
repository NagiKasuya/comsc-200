#include<ctime>
#include<cstdlib>
#include "Coin.h"

Coin::Coin() 
{
	toss();
}

//There is one-half chance that the heads or tails will be deicided.
void Coin::toss() 
{
	if (rand() % 2 == 0)
	{
		sideUp = "heads";
	}
	else
		sideUp = "tails";
}

//Return heads or tails.
string Coin::getSideUp()
{
	return sideUp;
}