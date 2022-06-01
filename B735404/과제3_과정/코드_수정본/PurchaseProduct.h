#pragma once
#include <string>
#include "PurchaseHistory.h"
#include "BuyProductUI.h"

class PurchaseProduct
{
private:
	bool IsAlreadyPurchased;
public:
	void ShowPurchaseResult(PurchaseHistory*, Product*);
	void startInterface(FILE*, PurchaseHistory* , Product* );
};

