#pragma once
#include <string>
#include <iostream>

class Item {
public:
	Item(std::string name, long id, double price, int stock);

	std::string myItemName;
	long myItemID;
	double myItemPrice;
	int myItemStock;
};

std::ostream& operator<<(std::ostream& os, const Item& item);
bool operator==(const Item& item1, const Item& item2);