#pragma once
#include "PurchaseHistory.h"
#include <iostream>
#include "PurchaseSatisfactionEvaluationUI.h"


/*
클래스 이름: PurchaseSatisfactionEvaluation
기능(설명): 구매한 상품에 대한 만족도를 평가한다.
*/
class PurchaseSatisfactionEvaluation
{
public:
	void startInterface(FILE* in_fp, FILE* out_fp, PurchaseHistory* purchaseHistory);
	Product* SelectProduct(PurchaseHistory* purchaseHistory, string productName);
	void inputPurchaseSatisfactionScore(Product* selectedProduct, int);
};

