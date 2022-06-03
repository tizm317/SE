#pragma once
#include <iostream>
#include "PurchaseHistory.h"
#include "PurchaseHistoryInquiryUI.h"

/*
클래스 이름: PurchaseHistoryInquiry
기능(설명): 구매한 모든 상품 내역을 조회한다.
*/
class PurchaseHistoryInquiry
{
public:
	void startInterface(FILE* in_fp, FILE* out_fp, PurchaseHistory* purchaseHistory);
	void showProductList(PurchaseHistory* purchaseHistory);
};

