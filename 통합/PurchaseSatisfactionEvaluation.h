#pragma once
#include <iostream>
#include "PurchaseHistory.h"
#include "PurchaseSatisfactionEvaluationUI.h"


class PurchaseSatisfactionEvaluation
{
private:
public:
	void startInterface(FILE *in_fp, FILE *out_fp, PurchaseHistory *purchaseHistory);
	Product *selectProduct(PurchaseHistory *purchaseHistory, string ProductName);
	void inputPurchaseSatisfactionScore(Product *selectedProduct, int);
};

