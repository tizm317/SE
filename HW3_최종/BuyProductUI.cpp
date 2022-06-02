#include "BuyProductUI.h"

void BuyProductUI::ClickPurchaseButton(FILE* out_fp, PurchaseHistory* purchaseHistory, Product* selectedProduct)
{
	PurchaseProduct purchaseProduct;
	purchaseProduct.ShowPurchaseResult(purchaseHistory, selectedProduct);

	fprintf(out_fp, "4.2. Buy Product\n");
	int temp = fprintf(out_fp, "> %s %s\n", selectedProduct->getSellerID().c_str(), selectedProduct->getProductName().c_str());
	fprintf(out_fp, "\n");
}

