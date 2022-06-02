#include "PurchaseSatisfactionEvaluation.h"

void PurchaseSatisfactionEvaluation::startInterface(FILE* in_fp, FILE* out_fp, PurchaseHistory* purchaseHistory)
{
	PurchaseSatisfactionEvaluationUI* purchaseSatisfactionEvaluationUI;
	purchaseSatisfactionEvaluationUI = new PurchaseSatisfactionEvaluationUI(in_fp, out_fp, purchaseHistory, this);
}

Product* PurchaseSatisfactionEvaluation::SelectProduct(PurchaseHistory* purchaseHistory, string ProductName)
{
	for (auto& itr : purchaseHistory->ListProducts())
	{
		string st1 = itr->GetProductName();
		string st2 = ProductName;
		if (st1.compare(st2) == 0)
		{
			itr->GetProductDetails();
			return itr;
		}
	}

	return NULL;
}

void PurchaseSatisfactionEvaluation::InputPurchaseSatisfactionScore(Product* selectedProduct, int PurchaseSatisfaction)
{

	//PurchaseSatisfaction = 0; // 초기화
	if (PurchaseSatisfaction <= 0 || PurchaseSatisfaction > 5)
		return;

	// 구매 만족도 변경
	selectedProduct->ChangeAvgPurchaseSatisfaction(PurchaseSatisfaction);

	// 출력 (전체 출력이라 바꿔줘야함)
	//selectedProduct->GetProductDetails();
}
