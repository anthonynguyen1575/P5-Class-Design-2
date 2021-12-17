#include "Order.h"
#include "Store.h"
#include <iostream>

Order::Order(std::vector<Item> order, std::vector<int> amountForEachItem)
	: myOrder{ order }, myItemCount{ amountForEachItem } { }

void Order::addItems(const Item& item, int count) {
	myOrder.push_back(item);
	myItemCount.push_back(count);
}

double getTotalPrice(const Order& order) {
	std::vector<Item> items = order.myOrder;
	std::vector<int> amount = order.myItemCount;
	double total = 0;

	for (std::size_t i = 0; i < items.size(); i++) {
		Item item = items[i];
		int count = amount[i];
		total += item.myItemPrice * count;
	}

	return total;
}