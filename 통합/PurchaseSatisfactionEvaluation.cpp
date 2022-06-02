#include "PurchaseSatisfactionEvaluation.h"

void PurchaseSatisfactionEvaluation::startInterface(FILE *in_fp, FILE *out_fp, PurchaseHistory *purchaseHistory)
{
	PurchaseSatisfactionEvaluationUI *purchaseSatisfactionEvaluationUI;
	purchaseSatisfactionEvaluationUI = new PurchaseSatisfactionEvaluationUI(in_fp, out_fp, purchaseHistory, this);
}

Product* PurchaseSatisfactionEvaluation::selectProduct(PurchaseHistory *purchaseHistory, string ProductName)
{
	for(auto& itr : purchaseHistory->listProducts())
	{
		string st1 = itr->getProductName();
		string st2 = ProductName;
		if (st1.compare(st2) == 0)
		{
			itr->getProductDetails();
			return itr;
		}
	}

	return NULL;
}

void PurchaseSatisfactionEvaluation::inputPurchaseSatisfactionScore(Product *selectedProduct, int PurchaseSatisfaction)
{
	if (PurchaseSatisfaction <= 0 || PurchaseSatisfaction > 5)
		return;

	selectedProduct->changeAvgPurchaseSatisfaction(PurchaseSatisfaction);
}
