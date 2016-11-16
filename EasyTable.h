#pragma once

#include "reservation.h"
#include "restaurant.h"
#include "input.h"

/*
EasyTable function is the main user interfase.  Prints onto and accepts information from the console.  
Input: a reservation (can actually be empty), an instance of Restaurants, which needs to be filled.
Output: the modified reservation
promps the user for the information and fills the given reservation with the appropriate information.
uses functions from the input.h to check the validity of user input.
*/




Reservation EasyTable(Reservation inReserve, Restaurants inRest) {
	
	cout << "Welcome to EasyTable. Here is our list of restaurants:" << endl;
	inRest.print();

	cout << "To make your Reservation, please enter a restaurant ID number: " << endl;
	int inID = checkInputWLimit("please enter a valid ID", inRest.length());
	inReserve.setRestName(inRest.restIDtoName(inID));

	cout << "Please enter the date of your desired reservation: " << endl;

	int inDay, inMon, inYr;

	cout << "Month: ";
	inMon = checkInputWLimit("that is not a valid date", 12);
	cout << "Day: ";
	inDay = checkInputWLimit("that is not a valid date", 31);
	cout << "Year: ";
	inYr = checkInputWLimit("that is not a valid date", 99);

	Date inDate(inMon, inDay, inYr);
	inReserve.setDate(inDate);

	cout << "Please enter the time of your desired reservation: " << endl;
	inReserve.setTime(checkInputToLength("that is not a valid time", 4));

	cout << "Please enter the name of the reservation: " << endl;
	inReserve.setCustomerName(checkInput<string>("that is not a valid name "));

	cout << "Please enter the size of your party: " << endl;
	inReserve.setSizeOfParty(checkInputWLimit("the party size is too large", 75));

	cout << "Please notify us of any known allergens: " << endl;
	inReserve.setAllergies(checkInput<string>("that is not a valid input"));

	cout << "Please enter a contact number: " << endl;
	inReserve.setContractNum(checkInputToLength("That is not a valid number, please try again", 10));

	cout << endl << endl << "Here is your reservation: " << endl;
	inReserve.print();
	inReserve.saveToTxt();
	cout << "Thank you for using EasyTable to make your reservations.  Please enjoy your meal!";

	return inReserve;
};
