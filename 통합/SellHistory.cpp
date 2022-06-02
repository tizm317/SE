#include <iostream>
#include "SellHistory.h"

SellHistory::SellHistory()
{
}

void SellHistory::addSellHistory(Product *selectedProduct)
{
	productList.push_back(selectedProduct);
}

vector<Product *> SellHistory::listProducts()
{
	return this->productList;
}