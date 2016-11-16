#pragma once
#include <string>
using namespace std;

class Date {
private:
	int month;
	int day;
	int year;

public:
	Date() { month = 0; day = 0; year = 0; }
	Date(int inMonth, int inDay, int inYear) { month = inMonth; day = inDay; year = inYear; }
	~Date() {}

	friend std::ostream& operator <<(std::ostream& os, Date & d) {
		os << d.month << "/" << d.day << "/" << d.year;
		return os;
	}

	int getMonth() { return month; }
	void setMonth(int inMonth) { month = inMonth; }

	int getDay() { return day; }
	void setDay(int inDay) { day = inDay; }

	int getYear() { return year; }
	void setYear(int inYear) { year = inYear; }
};

class Reservation {

public:
	Reservation();
	Reservation(string rName, string cName, unsigned long cNum, int size, string allergy, Date inDate, unsigned long inTime);
	~Reservation() {};
	void print();
	void saveToTxt();

	string getRestName();
	void setRestName(string rName);

	string getCustomerName();
	void setCustomerName(string cName);

	unsigned long getContactNum();
	void setContractNum(unsigned long cNum);
	
	int getSizeOfParty();
	void setSizeOfParty(int size);

	string getAllergies();
	void setAllergies(string allergy);

	Date getDate();
	void setDate(Date inDate);

	unsigned long  getTime();
	void setTime(unsigned long  time);


	
private:
	string restName;
	string customerName; 
	unsigned long contactNum;
	int sizeOfParty;
	string allergies;
	Date rDate;//i want something that can format the date; comes out as MMDDYY
	int rTime; //also 00:34 format


};


