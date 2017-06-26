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

char* dec2bin_minus(char *d, long long int n) {
	char *t = d;
	unsigned int u = (unsigned)n;
	for (unsigned int i = u; i != 0; i >>= 1) {
		d++;
	}
	*d = '\0';
	for (--d; u != 0; u >>= 1) {
		*d-- = (u & 1) + '0';
	}
	return t;
}

long long int bin2dec_minus(char *b) {
	unsigned int n = 0u;
	while (*b) {
		n |= (*b - '0');
		if (*(++b)) {
			n <<= 1;
		}
	}
	return (int)n;
}

void dec2bin_fr_part(long double a) {
	cout << "0.";
	for (int i = 0; i < 32; i++) {
		a *= 2;
		cout << int(a);
		if (a >= 1) {
			a--;
		}
	}
}