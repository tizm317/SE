#include "BuyProductUI.h"

void BuyProductUI::ClickPurchaseButton(FILE* out_fp, PurchaseHistory* purchaseHistory, Product* selectedProduct)
{
	PurchaseProduct purchaseProduct;
	purchaseProduct.ShowPurchaseResult(purchaseHistory, selectedProduct);

	int temp = fprintf(out_fp, "\n%s %s", selectedProduct->GetSellerID().c_str(), selectedProduct->GetProductName().c_str());
}

