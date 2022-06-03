#include "PurchaseProduct.h"
void PurchaseProduct::showPurchaseResult(PurchaseHistory* purchaseHistory, Product* selectedProduct)
{
	selectedProduct->reduceCount();

	(*purchaseHistory).addPurchaseHistory(selectedProduct);

	return;
}

void PurchaseProduct::startInterface(FILE* out_fp, PurchaseHistory* purchaseHistory, Product* selectedProduct)
{
	PurchaseProductUI purchaseProductUI;
	purchaseProductUI.clickPurchaseButton(out_fp, purchaseHistory, selectedProduct);
}
