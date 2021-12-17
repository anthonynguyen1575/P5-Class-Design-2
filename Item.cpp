#include "Item.h"

Item::Item(std::string name, long id, double price, int stock)
	: myItemName{ name }, myItemID{ id }, myItemPrice{ price },
	myItemStock{ stock } { }

std::ostream& operator<<(std::ostream& os, const Item& item) {
	os << "Item: " << item.myItemName << "\nID: " << std::to_string(item.myItemID) <<
		"\nPrice: " << std::to_string(item.myItemPrice) << "\nStock: " << std::to_string(item.myItemStock) << "\n";

	return os;
}

bool operator==(const Item& item1, const Item& item2) {
	return(item1.myItemName == item2.myItemName);
}