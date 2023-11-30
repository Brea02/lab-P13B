#include<iostream>
#include<string>

using namespace std;

//function prototypes
bool isLeapYear(int year);
int daysInMonth(int month, int year);


int main() {
	cout << "Enter a month and year or Q to quit: ";
	int year;
	int month;
	cin >> month >> year;
	if (month == 0) {
		return 0;
	}

	int days = daysInMonth(month, year);
	
	if (isLeapYear(year) == true) {
		//cout << year << " is a leap year.";
		if (month == 2) {
			days += 1;
		}
	}
	//else if (isLeapYear(year) == false) {
	//	cout << year << " is not a leap year.";
	//}

	const string MONTHS[] = { "blank", "January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

	string month_word = MONTHS[month];

	cout << month_word << " " << year << " has " << days << " days.";
	

}

//funcitons

int daysInMonth(int month, int year) {
	const int MONTHDAYS[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int month_fix = month - 1;
	int days = MONTHDAYS[month_fix];
	//if (isLeapYear(month) == true) {
	//	days = days + 1;
	//	return days;
	//}
	//else { return days; }
	return days;
}

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
