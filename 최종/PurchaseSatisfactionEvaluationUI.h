#pragma once
#include <iostream>
#include "PurchaseHistory.h"
#include "PurchaseSatisfactionEvaluation.h"

class PurchaseSatisfactionEvaluation;
class PurchaseSatisfactionEvaluationUI
{
private:
	char productName[100];
	int purchaseSatisfaction;
public:
	PurchaseSatisfactionEvaluationUI(FILE* in_fp, FILE* out_fp, PurchaseHistory* purchaseHistory, PurchaseSatisfactionEvaluation* callerPtr);
};

