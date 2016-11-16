#include <iostream>
#include "EasyTable.h"

void main()
{
	Reservation ourReservation;
	Restaurants ourRests = { "Olive Garden", "Gary Dango's", "Johnny Garlic's", "Ad Hoc",
		"Hakkasan", "La Foret", "Original Joe's", "Kiki's Sushi", "Yard House", "AB Steakhouse",
		"Tofu House", "Enjoy Seoul", "Kahoo" };
	EasyTable(ourReservation, ourRests);

	system("pause");
}