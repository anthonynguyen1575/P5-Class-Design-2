#pragma once
#include "Item.h"
#include <vector>

class Order {
public:
	Order(std::vector<Item> order, std::vector<int> amountForEachItem);

	std::vector<Item> myOrder;
	std::vector<int> myItemCount;

	void addItems(const Item& item, int count);
};

double getTotalPrice(const Order& order);