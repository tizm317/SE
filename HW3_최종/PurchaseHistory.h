#pragma once
#include "Product.h"
#include <vector>

class PurchaseHistory
{
private:
	vector<Product*> productList;
public:
	PurchaseHistory();
	void AddPurchaseHistory(Product*);
	vector<Product*> ListProducts();
	//bool CheckAlreadyPurchased(Product*);
};

