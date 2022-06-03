#pragma once
#include <string>
#include "PurchaseHistory.h"
#include "PurchaseProductUI.h"

/*
클래스 이름: PurchaseProduct
기능(설명): 상품 구매기능을 수행한다.
*/
class PurchaseProduct
{
private:
	bool isAlreadyPurchased;
public:
	void showPurchaseResult(PurchaseHistory*, Product*);
	void startInterface(FILE*, PurchaseHistory* , Product* );
};

