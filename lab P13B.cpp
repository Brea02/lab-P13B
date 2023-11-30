#include<iostream>
#include<string>

using namespace std;

//function prototypes
bool isLeapYear(int year);

int main() {
	cout << "Enter a year or Q to quit: ";
	int year;
	cin >> year;
	if (year == 0) {
		return 0;
	}


	
	if (isLeapYear(year) == true) {
		cout << year << " is a leap year.";
	}
	else if (isLeapYear(year) == false) {
		cout << year << " is not a leap year.";
	}

}

//funcitons

//isLeapYear - determines whether a given year is a leap year
//@param year - the year, expected to be >= 1582
//@return true - if year is leap year, otherwise false
bool isLeapYear(int year) {
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return true;
			}
			else { return false; }
		}
		else { return true; }
	}
	else { return false; }
}
