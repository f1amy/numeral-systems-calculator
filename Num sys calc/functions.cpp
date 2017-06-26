#include "stdafx.h"
#include "functions.h"

using namespace std;

long long int bin2dec(long long int n) {
	long long int decimalNumber = 0,
		i = 0, remainder;
	while (n != 0) {
		remainder = n % 10;
		n /= 10;
		decimalNumber += remainder * pow(2, i);
		i++;
	}
	return decimalNumber;
}

long long int hex2dec(string str) {
	long long int x = stoul(str, 0, 16);
	return x;
}

long long int dec2bin(long long int n) {
	long long int binaryNumber = 0;
	long long int remainder, i = 1;
	while (n != 0) {
		remainder = n % 2;
		n /= 2;
		binaryNumber += remainder * i;
		i *= 10;
	}
	return binaryNumber;
}