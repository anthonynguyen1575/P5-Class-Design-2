#include <algorithm>
#include "Store.h"

Store::Store(std::vector<Item> inventory)
	: myInventory{ inventory } { }


void Store::processOrder(const Order& order) {
	std::vector<Item> items = order.myOrder;
	std::vector<int> count = order.myItemCount;

	for(std::size_t i = 0; i < items.size(); i++) {
		auto it = std::find(myInventory.begin(), myInventory.end(), items[i]);
		int index = it - myInventory.begin();
		myInventory[index].myItemStock -= count[i];
	}
	
}

std::ostream& operator<<(std::ostream& os, const Store& inventory) {
	std::vector<Item> items = inventory.myInventory;
	std::string allItems = "";

	for (std::size_t i = 0; i < items.size(); i++) {
		Item item = items[i];
		allItems += item.myItemName + " x " + std::to_string(item.myItemStock) + "\n";
	}

	os << "Store:\n" << allItems;

	return os;
}