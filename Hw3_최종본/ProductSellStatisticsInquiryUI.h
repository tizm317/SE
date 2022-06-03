#pragma once
#include <iostream>
#include <vector>
#include "Product.h"
#include "ProductSellStatisticsInquiry.h"

class ProductSellStatisticsInquiry;
class SellHistory;

/*
클래스 이름: ProductSellStatisticsInquiryUI
기능(설명): Boundary class / 판매 상품 통계 입출력 담당으로 상품명, 상품 판매 총액, 평균 구매만족도를 출력한다.
*/
class ProductSellStatisticsInquiryUI
{
private:
	ProductSellStatisticsInquiry* productSellStatisticsInquiryPointer;
public:
	ProductSellStatisticsInquiryUI();
	void startInterface(FILE *out_fp, ProductSellStatisticsInquiry *, SellHistory *, vector<Product *>);
	vector<Product *> doProductSellStatisticsInquiry(ProductSellStatisticsInquiry *, SellHistory *, vector<Product *>);
};