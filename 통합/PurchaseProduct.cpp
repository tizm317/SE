#include "PurchaseProduct.h"

void PurchaseProduct::ShowPurchaseResult(PurchaseHistory* purchaseHistory, Product* selectedProduct)
{
	if (purchaseHistory->ListProducts().size() == 0)
	{
		IsAlreadyPurchased = false;
	}
	else
	{
		IsAlreadyPurchased = (*purchaseHistory).CheckAlreadyPurchased(selectedProduct);
	}


	// 이미 구매한 적 있으면 구매 x
	if (IsAlreadyPurchased)
		return;

	// 구매
	// 개수 하나 줄이고
	selectedProduct->ReduceCount();

	// 구매 목록에 추가
	(*purchaseHistory).AddPurchaseHistory(selectedProduct);

	return;
}

void PurchaseProduct::startInterface(FILE* out_fp, PurchaseHistory* purchaseHistory, Product* selectedProduct)
{
	BuyProductUI buyProductUI;
	buyProductUI.ClickPurchaseButton(out_fp, purchaseHistory, selectedProduct);
}
