#include <iostream>
#include "SellHistory.h"

SellHistory::SellHistory()
{
}

void SellHistory::AddSellHistory(Product *selectedProduct)
{
	productList.push_back(selectedProduct);
}

vector<Product *> SellHistory::ListProducts()
{
	return this->productList;
}

int SellHistory::get_length()
{
	int count = 0;
	for(auto& itr: this->productList)
	{
		count++;
	}
	return count;
}