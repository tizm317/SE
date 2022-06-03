#include "PurchaseHistory.h"

PurchaseHistory::PurchaseHistory()
{
}

void PurchaseHistory::addPurchaseHistory(Product* selectedProduct)
{
	productList.push_back(selectedProduct);
}

vector<Product*> PurchaseHistory::listProducts()
{
	return this->productList;
}