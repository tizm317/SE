#include "BuyProductUI.h"

void BuyProductUI::clickPurchaseButton(FILE *out_fp, PurchaseHistory *purchaseHistory, Product *selectedProduct)
{
	PurchaseProduct purchaseProduct;
	purchaseProduct.showPurchaseResult(purchaseHistory, selectedProduct);

	fprintf(out_fp, "4.2. Buy Product\n");
	fprintf(out_fp, "> %s %s\n", selectedProduct->getSellerId().c_str(), selectedProduct->getProductName().c_str());
}

