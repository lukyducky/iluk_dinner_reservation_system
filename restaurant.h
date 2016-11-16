#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>

using namespace std;

/*
//class of a list of Restaurants, stored in a string vector.
Includes functionality to print indexed list, and to get restaurant name using the ID number

*/

class Restaurants { 
public:
	Restaurants() { };
	Restaurants(initializer_list<string> args) {
		restList.reserve(args.size());
		restList.insert(cend(restList), cbegin(args), cend(args));
	}

	void print()const {
		int i = 1;
		for (auto value : restList) {
			cout << i <<  ": " << value << endl;
			i++;
		}
		cout << endl;
	}


	string restIDtoName(int ID){
		string rName;
		vector<string>:: iterator it;
		int i = 1; //counter

		for (it = restList.begin(); it < restList.end(); it++){
			if (i = ID) {
				rName = *it;
				break; }
			i++;
		}
		return rName;
	}

	int length(){
		vector<string>::iterator it;
		int i = 0; //counter

		for (it = restList.begin(); it < restList.end(); it++){
			i++;
		}
		return i;
	}

private:
	vector<string> restList;

};