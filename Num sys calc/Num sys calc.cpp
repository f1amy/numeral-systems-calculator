// Num sys calc.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "functions.h"

using namespace std;

int main() {
	int choice = 0;
	long long int number = 0;
	string hexNumber = "";
	cout << "Converting numbers into other numeral systems.\nBy Yury Putimcev." << endl;
	do {
		choice = 0;
		number = 0;
		hexNumber = "";
		cout << "\nSelect an operation:" << endl;
		cout << "1) Binary to decimal (2 -> 10)." << endl;
		cout << "2) Binary to hexadecimal (2 -> 16)." << endl;
		cout << "3) Decimal to binary (10 -> 2)." << endl;
		cout << "4) Decimal to hexadecimal (10 -> 16)." << endl;
		cout << "5) Hexadecimal to decimal (16 -> 10)." << endl;
		cout << "6) Hexadecimal to binary (16 -> 2)." << endl;
		cout << "7) Exit.\n> ";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case 1:
			cout << "Enter the binary number.\n> ";
			cin >> number;
			cout << "Answer: " << number << "(2) = " << bin2dec(number) << "(10).";
			break;
		case 2:
			cout << "Enter the binary number.\n> ";
			cin >> number;
			cout << "Answer: " << number << "(2) = " << uppercase << hex << bin2dec(number) << "(16).";
			break;
		case 3:
			cout << "Enter the decimal number.\n> ";
			cin >> number;
			cout << "Answer: " << number << "(10) = " << dec2bin(number) << "(2).";
			break;
		case 4:
			cout << "Enter the decimal number.\n> ";
			cin >> number;
			cout << "Answer: " << number << "(10) = " << uppercase << hex << number << "(16).";
			break;
		case 5:
			cout << "Enter the hexadecimal number.\n> ";
			cin >> hexNumber;
			transform(hexNumber.begin(), hexNumber.end(), hexNumber.begin(), ::toupper);
			cout << "Answer: " << hexNumber << "(16) = " << hex2dec(hexNumber) << "(10).";
			break;
		case 6:
			cout << "Enter the hexadecimal number.\n> ";
			cin >> hexNumber;
			transform(hexNumber.begin(), hexNumber.end(), hexNumber.begin(), ::toupper);
			cout << "Answer: " << hexNumber << "(16) = " << dec2bin(hex2dec(hexNumber)) << "(2).";
			break;
		case 7:
			cout << "Press any key to exit.";
			break;
		default:
			cout << "Error. Press any key to try again.";
			break;
		}
		cin.ignore();
		cin.get();
	} while (choice != 7);
	return 0;
}

/*
maybe all operations:
normal:
bin2dec
bin2hex
dec2bin
dec2hex
hex2dec
hex2bin

bytes with a singn:
BWAS102BWAS2
BWAS22BWAS10

float:
fdec2fbin
fbin2fdec
*/
