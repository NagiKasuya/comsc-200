#include<iostream>
#include"Coin.h"

using namespace std;

int main() 
{
	//Make each initial value to declare.
	int count = 0;
	double playerbalance = 0;
	double computerbalance = 0;
	Coin quarter;
	Coin dime;
	Coin nickel;
	srand(time(0));
	
	cout << "Your starting balance:$" << playerbalance << endl;
	cout << "computer's starting balance:$" << computerbalance << endl;
	//Make it eaiser to see.
	cout << endl;

	//
	while(playerbalance < 1.0 && computerbalance < 1.0)
	{
		//Use "count++" to count round.
		count++;
		quarter.toss();
		dime.toss();
		nickel.toss();

		//toss() for playerbalance.
		if (quarter.getSideUp() == "heads")
		{
			playerbalance = playerbalance + 0.25;
		}
		else if (dime.getSideUp() == "heads")
		{
			playerbalance = playerbalance + 0.10;
		}
		else if (nickel.getSideUp() == "heads")
		{
			playerbalance = playerbalance + 0.05;
		}

		//toss() for computerpoints.
		quarter.toss();
		dime.toss();
		nickel.toss();

		//Update balance for computerbalance.
		if (quarter.getSideUp() == "heads")
		{
			computerbalance = computerbalance + 0.25;
		}
		else if (dime.getSideUp() == "heads")
		{
			computerbalance = computerbalance + 0.10;
		}
		else if (nickel.getSideUp() == "heads")
		{
			computerbalance = computerbalance + 0.05;
		}

		cout << "Your balance after round " << count << ": " << playerbalance << endl;
		cout << "The computer's balance after round " << count << ": " << computerbalance << endl;
		//Make it eaiser to see.
		cout << endl;
	}

	//The result depends on balance.
	if (playerbalance <= 1.0 && computerbalance > 1.0)
	{
		cout << "Congratulations! You won." << endl;
	}
	else if (playerbalance > 1.0 && computerbalance <= 1.0)
	{
		cout << "Sorry! The computer won." << endl;
	}
	else if (playerbalance == computerbalance)
	{
		cout << "Tie! Nobody wins." << endl;
	}
	else if(computerbalance < playerbalance)
		cout << "Sorry! The computer won." << endl;
	else
		cout << "Congratulations! You win." << endl;

	return 0;
}