#include "Item.h"
#include "Order.h"

class Store {
public:
	Store(std::vector<Item> inventory);

	std::vector<Item> myInventory;

	void processOrder(const Order& order);
};

std::ostream& operator<<(std::ostream& os, const Store& inventory);