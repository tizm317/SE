#pragma once
#include "ProductSellStatisticsInquiryUI.h"
#include "SellHistory.h"

/*
클래스 이름: ProductSellStatisticsInquiry
기능(설명): 모든 판매 상품에 대한 통계 기능을 수행한다.
*/
class ProductSellStatisticsInquiry
{
public:
	ProductSellStatisticsInquiry();
	void startInterface(FILE *out_fp, SellHistory *sellhistory, vector<Product *>);
	vector<Product *> showSellStatistics(SellHistory *sellhistory, vector<Product *>);
};