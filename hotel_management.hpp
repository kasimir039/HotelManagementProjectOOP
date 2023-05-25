#ifndef __HOTEL_MANAGEMENT_HPP__
#define __HOTEL_MANAGEMENT_HPP__

#include <iostream>

class Hotel
{
public:

	int quantity = 0;
	int choice = 0;

	int quantityRooms = 0;
	int soldRooms = 0;
	int totalRooms = 0;

	int quantityPasta = 0;
	int soldPasta = 0;
	int totalPasta = 0;

	int quantityBurger = 0;
	int soldBurger = 0;
	int totalBurger = 0;

	int quantityNoodles = 0;
	int soldNoodles = 0;
	int totalNoodles = 0;

	int quantityShake = 0;
	int soldShake = 0;
	int totalShake = 0;

	int quantityChicken = 0;
	int soldChicken = 0;
	int totalChicken = 0;

	void quantityItems();
	void Menu();
	void salesInformation() const;

	enum Items
	{
		ROOMS = 1,
		PASTA,
		BURGER,
		NOODLE,
		SHAKE,
		CHICKEN,
		INFORMATION,
		EXIT
	};

};

#endif