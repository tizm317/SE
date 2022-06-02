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

bool PurchaseHistory::checkAlreadyPurchased(Product* selectedProduct)
{
	bool isAlreadyPurchased = false;

	for (auto& itr : productList)
	{
		if (itr->getProductName() == selectedProduct->getProductName())
		{
			isAlreadyPurchased = true;
			return isAlreadyPurchased;
		}
	}
	return isAlreadyPurchased;
}
