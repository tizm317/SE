#pragma once
#include <iostream>
#include "PurchaseHistory.h"
#include "PurchaseSatisfactionEvaluation.h"

class PurchaseSatisfactionEvaluation;

/*
클래스 이름: PurchaseSatisfactionEvaluationUI
기능(설명): 상품 구매만족도 평가 기능 입출력 담당으로 상품명과 구매만족도를 입력받는다.
*/
class PurchaseSatisfactionEvaluationUI
{
private:
	char productName[100];
	int purchaseSatisfaction;
public:
	PurchaseSatisfactionEvaluationUI(FILE* in_fp, FILE* out_fp, PurchaseHistory* purchaseHistory, PurchaseSatisfactionEvaluation* callerPtr);
};

