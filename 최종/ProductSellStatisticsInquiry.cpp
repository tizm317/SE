#include "ProductSellStatisticsInquiry.h"
#include "SellHistory.h"

ProductSellStatisticsInquiry::ProductSellStatisticsInquiry()
{
}

void ProductSellStatisticsInquiry::startInterface(FILE *out_fp, SellHistory *sellProductList, vector<Product *> productList)
{
	ProductSellStatisticsInquiryUI productSellStatisticsInquiryUI;
    productSellStatisticsInquiryUI.startInterface(out_fp, this, sellProductList, productList);
}

vector<Product *> ProductSellStatisticsInquiry::showSellStatistics(SellHistory *sellHistory, vector<Product *> productList)
{
    vector<Product *> sellProductListPointer;
    
    vector<Product *> sellProductList = sellHistory->listProducts();
    for(auto& itr : sellProductList)
    {   
        Product *selectedProduct = itr->getProductDetails();
        sellProductListPointer.push_back(selectedProduct);
    }

    return sellProductListPointer;
}