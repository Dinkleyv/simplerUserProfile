// simpleUserProfile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>

int main()
{
/*Question 1
Create a simple user profile that accepts your details and displays them as output*/

	//variable declaraiton
	string fName, lName, fullName, favMeal, favMovie, favSport;

	//getting output from user
	cout << "Enter your profile details\n ";
	cout << "Enter your full name\t";
	fullName = fName + lName;
	getline(cin, fullName);
	cout << "What's your favorite movie(s)\t";
	getline(cin, favMovie);
	cout << "What's your favorite meal\t";
	getline(cin, favMeal);
	cout << "What's your favorite sport(s)\t";
	getline(cin, favSport);


	cout << " ******Personal Profile********\n" ;

	cout << "Full name:\t" << fullName;
	cout << "\nFavorite Meal:\t" << favMeal;
	cout << "\nFavorite Movies(s):\t" << favMovie;
	cout << "\nFavorite Sport(s):\t" << favSport;

}

