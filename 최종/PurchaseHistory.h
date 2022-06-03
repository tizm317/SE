#pragma once
#include "Product.h"
#include <vector>

class PurchaseHistory
{
private:
	vector<Product*> productList;
public:
	PurchaseHistory();
	void addPurchaseHistory(Product*);
	vector<Product*> listProducts();
};

