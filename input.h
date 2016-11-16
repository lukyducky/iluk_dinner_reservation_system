#pragma once

#include <iostream>
#include <sstream>

using namespace std;

/*
	a collection of helper functions to be used in tangent with the reservation class; 
	accepts and type checks user inputs,
	also functions to aid the input checkers
*/

template<typename T>
T checkInput(string errorMessage) { //generic input getter and checker: if not type T, will output desired message
	T input;
	string line;

	while (getline(cin, line)) {
		stringstream ss(line);
		if ((ss >> input) && ss.eof()) {
			break;
		}
		cout << errorMessage << endl;
	}
	return input;
}

int checkLength(unsigned long num) { //checks "length" of the number: how many digits
	int len = 0;
	while (num != 0) {
		num /= 10;
		len++;
	}
	return len;
}

int checkInputWLimit(string errorMessage, int limit) { //makes sure the input is withint the desired limit
	int input;
	string line;

	while (getline(cin, line)) {
		stringstream ss(line);
		if ((ss >> input) && ss.eof() && (input <= limit) && (input != 0)){
			break;
		}
		cout << errorMessage << endl;
	}
	return input;
}

unsigned long checkInputToLength(string errorMessage, int len) { //makes sure the input is of the desired length
	unsigned long input;
	string line;

	while (getline(cin, line)) {
		stringstream ss(line);
		if ((ss >> input) && ss.eof() && (checkLength(input) == len)) {
			break;
		}
		cout << errorMessage << endl;
	}
	return input;
}



