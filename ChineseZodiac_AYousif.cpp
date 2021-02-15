// A6_ChineseZodiac_AYousif.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <assert.h>

struct birthdate {
	int month;
	int day;
	int year;


};
int main()
{

	birthdate p1;
	cout << "Enter The Month of your birthday" << endl;
	cin >> p1.month;
	if (p1.month > 12)
	{
		cout << "This month is invalid" << endl;
		return 0;
	}
	cout << "Enter the Day of your Birthday" << endl;
	cin >> p1.day;
	if (p1.day > 31)
	{
		cout << "This Day is invalid" << endl;
		return 0;
	}
	cout << "Enter the year of your birthday" << endl;
	cin >> p1.year;
	if (p1.year > 2018)
	{
		cout << "This Year is Invalid" << endl;
		return 0;
	}
	if (p1.year < 1924)
	{
		cout << "This Year is Invalid" << endl;
		return 0;
	}

	cout << " Your birthday is " << p1.month << " " << p1.day << " " << p1.year << "" << endl;

	switch ((p1.year - 3) % 12)
	{
	case 1: cout << " You are a Rat" << endl;
		break;
	case 2: cout << " You are a Ox" << endl;
		break;
	case 3: cout << " You are a Tiger" << endl;
		break;
	case 4: cout << " You are a Rabbit" << endl;
		break;
	case 5: cout << " You are a Dragon" << endl;
		break;
	case 6: cout << " You are a Snake" << endl;
		break;
	case 7: cout << " You are a Horse" << endl;
		break;
	case 8: cout << " You are a Goat" << endl;
		break;
	case 9: cout << " You are a Monkey" << endl;
		break;
	case 10: cout << " You are a Rooster" << endl;
		break;
	case 11: cout << " You are a Dog" << endl;
		break;
	case 12: cout << " You are a Pig" << endl;



	}

	birthdate p2;
	cout << "Enter The Month of your birthday" << endl;
	cin >> p2.month;
	if (p2.month > 12)
	{
		cout << "This month is invalid" << endl;
		return 0;
	}
	cout << "Enter the Day of your Birthday" << endl;
	cin >> p2.day;
	if (p2.day > 31)
	{
		cout << "This Day is invalid" << endl;
		return 0;
	}
	cout << "Enter the year of your birthday" << endl;
	cin >> p2.year;
	if (p2.year > 2018)
	{
		cout << "This Year is Invalid" << endl;
		return 0;
	}
	if (p2.year < 1924)
	{
		cout << "This Year is Invalid" << endl;
		return 0;
	}

	cout << " Your birthday is " << p2.month << " " << p2.day << " " << p2.year << "" << endl;

	switch ((p2.year - 3) % 12)
	{
	case 1: cout << " You are a Rat" << endl;
		break;
	case 2: cout << " You are a Ox" << endl;
		break;
	case 3: cout << " You are a Tiger" << endl;
		break;
	case 4: cout << " You are a Rabbit" << endl;
		break;
	case 5: cout << " You are a Dragon" << endl;
		break;
	case 6: cout << " You are a Snake" << endl;
		break;
	case 7: cout << " You are a Horse" << endl;
		break;
	case 8: cout << " You are a Goat" << endl;
		break;
	case 9: cout << " You are a Monkey" << endl;
		break;
	case 10: cout << " You are a Rooster" << endl;
		break;
	case 11: cout << " You are a Dog" << endl;
		break;
	case 12: cout << " You are a Pig" << endl;



	}



	if (p1.year - 4 == p2.year)
	{
		cout << "You two are compatible!" << endl;
	}
	else if (p1.year + 4 == p2.year)
	{
		cout << "You Two Are compatible!" << endl;
	}
	else if (p1.year + 8 == p2.year)
	{
		cout << "You Two are compatible!" << endl;
	}
	else if (p1.year - 8 == p2.year)
	{
		cout << "You Two are compatible!" << endl;
	}
	else
	{
		cout << "You two are not compatible :(" << endl;
	}


}





