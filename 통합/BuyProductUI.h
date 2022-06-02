#pragma once
#include <string>
#include "PurchaseProduct.h"
using namespace std;

class PurchaseProduct;

class BuyProductUI
{
public:
	void clickPurchaseButton(FILE *, PurchaseHistory *, Product *);
};

