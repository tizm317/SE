#pragma once
#include <iostream>
#include "PurchaseHistory.h"
#include "PurchaseHistoryInquiryUI.h"

class PurchaseHistoryInquiry
{
public:
	void startInterface(FILE* in_fp, FILE* out_fp, PurchaseHistory* purchaseHistory);
	void showProductList(PurchaseHistory* purchaseHistory);
};

