#pragma once
#include "ProductSellStatisticsInquiryUI.h"
#include "SellHistory.h"

class ProductSellStatisticsInquiry
{
public:
	ProductSellStatisticsInquiry();
	void startInterface(FILE *out_fp, SellHistory *sellhistory, vector<Product *>);
	vector<Product *> showSellStatistics(SellHistory *sellhistory, vector<Product *>);
};