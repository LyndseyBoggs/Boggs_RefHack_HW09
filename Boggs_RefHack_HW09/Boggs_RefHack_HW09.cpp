// Boggs_RefHack_HW09.cpp : Defines the entry point for the console application.
// Assignment 09
// Lyndsey Boggs


#include "stdafx.h" // include the standard library
#include <iostream> // include inputs from user and outputs to cout


using namespace std; // use all abreviations of the standard library automatically so we don't have to write them

					 //a function with no return value, that does not correctly swap two integers
void normalTrans(int x, int y);
//a function with no return value that correctly swaps two integers
void hackedTrans(int& x, int& y);

//main function of the program that controls all other functions and concludes the program
int main()
{
	int bankTerror = 8000000; // int variable to hold the Bank of Terror's account info
	int joeCoffee = 1000; // int variable to hold the Joe's Coffee Shop account info

	cout << "The CIA has observed the bank accounts of the Bank of Terror\n";
	cout << "and our beloved Joe's Coffee Shop. A plan is being constructed\n";
	cout << "to turn the tables.\n\n";

	//display original account balances
	cout << "Original account balances:\n";
	cout << "Bank of Terror: $" << bankTerror << endl;
	cout << "Joe's Coffee Shop: $" << joeCoffee << "\n\n";

	//display the results of a normal transaction
	cout << "The world is not fair. Observe a normal transaction.\n";
	cout << "Calling normalTrans()\n";
	normalTrans(bankTerror, joeCoffee); // call the normal transaction by passing the int variables for both accounts
	cout << "Bank of Terror: $" << bankTerror << endl; // show nothing has changed
	cout << "Joe's Coffee Shop: $" << joeCoffee << "\n\n"; // show nothing has changed

														   //display the results of a hacked transaction
	cout << "Justice must be done. Operation CYBER ROBIN HOOD is underway...\n";
	cout << "Calling hackedTrans()\n";
	hackedTrans(bankTerror, joeCoffee); // call the hacked transaction by passing the int variables for both accounts
	cout << "Bank of Terror: $" << bankTerror << endl; // show the new account balance of Bank of Terror
	cout << "Joe's Coffee Shop: $" << joeCoffee << "\n\n"; // show the new account balance of Joe's Coffee Shop

														   //a logical follow through to the operation
	cout << "Joe's Coffee Shop will be placed under surveilance and protection\n";
	cout << "to prevent any retribution from the Bank of Terror.\n"; 

	system("pause"); // pause the console to remain on screen
	return 0; // return to OS
}

///Define the normalTrans function by using integers
void normalTrans(int x, int y)
{
	int temp = x; //create a temporary variable to hold int x
	x = y; // set x equal to the value of y
	y = temp; // set y equal to temp, which holds the original value of x
}

///Define the hackedTrans function by using references
void hackedTrans(int& x, int& y)
{
	int temp = x; //create a temporary variable to hold the value of the int x reference
	x = y; // set x equal to the value of y
	y = temp; // set y equal to temp, which holds the original value of x
}