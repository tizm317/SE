#include "PurchaseHistory.h"

PurchaseHistory::PurchaseHistory()
{
}

void PurchaseHistory::AddPurchaseHistory(Product* selectedProduct)
{
	productList.push_back(selectedProduct);
}

vector<Product*> PurchaseHistory::ListProducts()
{
	return this->productList;
}

bool PurchaseHistory::CheckAlreadyPurchased(Product* selectedProduct)
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
