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
	// �̹� ���� ����Ʈ�� �����ϸ�,
	for (auto& itr : productList)
	{
		if (itr->GetProductName() == selectedProduct->GetProductName())
		{
			isAlreadyPurchased = true;
			return isAlreadyPurchased;
		}
	}
	return isAlreadyPurchased;
}
