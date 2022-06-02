#pragma once
#include <string>
#include "PurchaseHistory.h"
#include "BuyProductUI.h"

class PurchaseProduct
{
private:
	bool isAlreadyPurchased;
public:
	void showPurchaseResult(PurchaseHistory *, Product *);
	void startInterface(FILE *, PurchaseHistory *, Product *);
};

