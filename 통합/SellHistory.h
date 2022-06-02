#pragma once
#include "Product.h"
#include <vector>

class SellHistory
{
private:
	vector<Product*> productList;
public:
	SellHistory();
	void addSellHistory(Product *);
	vector<Product *> listProducts();
};
