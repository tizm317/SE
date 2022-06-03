#pragma once
#include "PurchaseHistoryInquiry.h"

class PurchaseHistoryInquiry;

/*
클래스 이름: PurchaseHistoryInquiryUI
기능(설명): Boundary class / 상품 구매 내역 조회 입출력 담당으로 판매자ID, 상품명, 제작회사명, 가격, 남은수량, 평균 구매만족도를 출력한다.
*/
class PurchaseHistoryInquiryUI
{
public:
	PurchaseHistoryInquiryUI(FILE* out_fp, PurchaseHistory* purchaseHistory);
};

