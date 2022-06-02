#pragma once
#include <iostream>
#include <vector>
#include "Product.h"
#include "ProductSellStatisticsInquiry.h"

class ProductSellStatisticsInquiry;
class SellHistory;

class ProductSellStatisticsInquiryUI
{
private:
	ProductSellStatisticsInquiry* productSellStatisticsInquiryPointer;
public:
	ProductSellStatisticsInquiryUI();
	void startInterface(FILE *out_fp, ProductSellStatisticsInquiry *, SellHistory *, vector<Product *>);
	vector<Product *> doProductSellStatisticsInquiry(ProductSellStatisticsInquiry *, SellHistory *, vector<Product *>);
};