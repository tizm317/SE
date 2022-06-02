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


	// �̹� ������ �� ������ ���� x
	if (IsAlreadyPurchased)
		return;

	// ����
	// ���� �ϳ� ���̰�
	selectedProduct->reduceCount();

	// ���� ��Ͽ� �߰�
	(*purchaseHistory).AddPurchaseHistory(selectedProduct);

	return;
}

void PurchaseProduct::startInterface(FILE* out_fp, PurchaseHistory* purchaseHistory, Product* selectedProduct)
{
	BuyProductUI buyProductUI;
	buyProductUI.ClickPurchaseButton(out_fp, purchaseHistory, selectedProduct);
}
