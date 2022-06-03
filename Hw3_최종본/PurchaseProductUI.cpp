#include "PurchaseProductUI.h"

void PurchaseProductUI::clickPurchaseButton(FILE* out_fp, PurchaseHistory* purchaseHistory, Product* selectedProduct)
{
	PurchaseProduct purchaseProduct;
	purchaseProduct.showPurchaseResult(purchaseHistory, selectedProduct);

	fprintf(out_fp, "4.2. 상품 구매\n");
	int temp = fprintf(out_fp, "> %s %s\n", selectedProduct->getSellerID().c_str(), selectedProduct->getProductName().c_str());
	fprintf(out_fp, "\n");
}

