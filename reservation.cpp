#include "reservation.h"
#include <fstream>
#include <iostream>

using namespace std;

Reservation::Reservation() {
	restName = "";
	customerName = "John Doe";
	contactNum = 0;
	sizeOfParty = 0;
	allergies = "";
	rDate;
	rTime = 0;
}

Reservation::Reservation(string rName, string cName, unsigned long cNum, int size, string allergy, Date inDate, unsigned long  inTime)
{
	restName = rName;
	customerName = cName;
	contactNum = cNum;
	sizeOfParty = size;
	allergies = allergy;
	rDate = inDate;
	rTime = inTime;
}

void Reservation::saveToTxt(){
	ofstream textFile;
	textFile.open(customerName + ".txt");
	textFile << "Reservation to: " << restName << " for : " << customerName << "\n"
		<< "Party of : " << sizeOfParty << " on " << rDate << "at" << rTime<< "\n"
		<< "Known allergens: " << allergies << endl
		<< "Contact number: " << contactNum;
	textFile.close();

}


void Reservation::print(){
	cout << "Reservation to: " << restName << " for : " << customerName << "\n"
		<< "Party of : " << sizeOfParty << " on " << rDate << " at " << rTime << "\n"
		<< "Known allergens: " << allergies << endl
		<< "Contact number: " << contactNum << endl;
}


string Reservation::getRestName(){
	return restName;
}
void Reservation::setRestName(string rName){
	restName = rName;
}

string Reservation::getCustomerName(){
	return customerName;
}

void Reservation::setCustomerName(string cName){
	customerName = cName;
}

unsigned long Reservation::getContactNum(){
	return contactNum;
}

void Reservation::setContractNum(unsigned long cNum){
	contactNum = cNum;
}

int Reservation::getSizeOfParty(){
	return sizeOfParty;
}

void Reservation::setSizeOfParty(int size){
	sizeOfParty = size;
}

string Reservation::getAllergies(){
	return allergies;
}

void Reservation::setAllergies(string allergy){
	allergies = allergy;
}

Date Reservation::getDate() {
	return rDate;
}

void Reservation::setDate(Date inDate){
	rDate = inDate;
}

unsigned long  Reservation::getTime() {
	return rTime;
}
void Reservation::setTime(unsigned long  inTime)
{
	rTime = inTime;
}

