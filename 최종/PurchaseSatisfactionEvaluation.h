#pragma once
#include "PurchaseHistory.h"
#include <iostream>
#include "PurchaseSatisfactionEvaluationUI.h"


class PurchaseSatisfactionEvaluation
{
private:
public:
	void startInterface(FILE* in_fp, FILE* out_fp, PurchaseHistory* purchaseHistory);
	Product* SelectProduct(PurchaseHistory* purchaseHistory, string productName);
	void inputPurchaseSatisfactionScore(Product* selectedProduct, int);
};

