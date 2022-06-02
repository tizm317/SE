#include "PurchaseProduct.h"

void PurchaseProduct::showPurchaseResult(PurchaseHistory *purchaseHistory, Product *selectedProduct)
{
	if (purchaseHistory->listProducts().size() == 0)
	{
		isAlreadyPurchased = false;
	}
	else
	{
		isAlreadyPurchased = (*purchaseHistory).checkAlreadyPurchased(selectedProduct);
	}

	if (isAlreadyPurchased)
		return;

	selectedProduct->reduceCount();

	(*purchaseHistory).addPurchaseHistory(selectedProduct);

	return;
}

void PurchaseProduct::startInterface(FILE* out_fp, PurchaseHistory* purchaseHistory, Product* selectedProduct)
{
	BuyProductUI buyProductUI;
	buyProductUI.clickPurchaseButton(out_fp, purchaseHistory, selectedProduct);
}
