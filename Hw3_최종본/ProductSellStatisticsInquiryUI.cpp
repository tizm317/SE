#include "ProductSellStatisticsInquiryUI.h"

ProductSellStatisticsInquiryUI::ProductSellStatisticsInquiryUI()
{
}

void ProductSellStatisticsInquiryUI::startInterface(FILE *out_fp, ProductSellStatisticsInquiry *productSellStatisticsInquiryPointer, SellHistory *sellProductList, vector<Product *> productList)
{
	this->productSellStatisticsInquiryPointer = productSellStatisticsInquiryPointer;

	vector<Product *> sellProductPointerList;

	sellProductPointerList = this->doProductSellStatisticsInquiry(productSellStatisticsInquiryPointer, sellProductList, productList);


	fprintf(out_fp, "5.1. 판매 상품 통계\n");
    for(auto &itr : sellProductPointerList)
    {
		fprintf(out_fp, "> %s %d %.1f\n", itr->getProductName().c_str(),  itr->getCost() * itr->getSellCount(), itr->getAvgPurchaseSatisfaction());
    }
	fprintf(out_fp, "\n");
}

vector<Product *> ProductSellStatisticsInquiryUI::doProductSellStatisticsInquiry(ProductSellStatisticsInquiry *productSellStatisticsInquiryPointer, SellHistory *sellProductList, vector<Product *> productList)
{
	vector<Product *> sellProductPointerList;

	sellProductPointerList = this->productSellStatisticsInquiryPointer->showSellStatistics(sellProductList, productList);
	
	return sellProductPointerList;
}