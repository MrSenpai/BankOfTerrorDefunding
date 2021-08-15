/*
	Moises Cardona
	08/14/2021
	UAT

	Bank of Terror Defunding: a program that swaps the terrorists account using REFERENCES
*/

#include <iostream>
using namespace std;

//Prototype for the bad swap
void badSwap(int evilAccount, int goodAccount);

//Prototype for the good swap
void goodSwap(int& evilAccount, int& goodAccount);

int main()
{
	int bankOfTerror = 34000000;
	int cupOfJoe = 2;

	cout << "Original accounts\n";
	cout << "Bank of Terror balance: $" << bankOfTerror << "\n";
	cout << "Joe's Coffee Shop balance: $" << cupOfJoe << "\n\n";

	cout << "Passing funds to account\n";
	badSwap(bankOfTerror, cupOfJoe);	//Calling badSwap
	cout << "Bank of Terror balance: $" << bankOfTerror << "\n";
	cout << "Joe's Coffee Shop balance: $" << cupOfJoe << "\n\n";

	cout << "Passing funds to account\n";
	cout << "EXECUTING SWAP.EXE...\n";
	goodSwap(bankOfTerror, cupOfJoe);	//Calling goodSwap
	cout << "Bank of Terror balance: $" << bankOfTerror << "\n";
	cout << "Joe's Coffee Shop balance: $" << cupOfJoe << "\n\n";
}

//Unsuccessful swap attempt
void badSwap(int evilAccount, int goodAccount)
{
	int temp = evilAccount;
	evilAccount = goodAccount;
	goodAccount = temp;

}

//Successful swap attemp
	//Function that swaps accounts by using references
void goodSwap(int& evilAccount, int& goodAccount)
{
	int temp = evilAccount;		//evilAccount funds (value) is stored in  variable temp
	evilAccount = goodAccount;	//goodAccount funds (value) is transferred to evilAccount
	goodAccount = temp;			//Funds (value) previosly stored in variable temp from evilAccount are transferred to goodAccount
}