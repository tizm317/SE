#include "SearchSellProduct.h"
#include "SellHistory.h"

SearchSellProduct::SearchSellProduct()
{
}

void SearchSellProduct::startInterface(FILE *out_fp, SellHistory *sellProductList, vector<Product *> productList)
{
	// main.cpp에서 Control 클래스가 생성이되면 startInterface함수 호출해서 Boundary 클래스 생성
	SearchSellProductUI searchSellProductUI;
    searchSellProductUI.startInterface(out_fp, this, sellProductList, productList);
}

vector<Product *> SearchSellProduct::ShowSellProductList(SellHistory *sellHistory, vector<Product *> productList)
{
    vector<Product *> sellProductPointerList;
    
    vector<Product *> sellProductList = sellHistory->ListProducts(); // sellHistory에서 다 접근함
    for(auto& itr : sellProductList)
    {
        Product *selectedProduct = itr->GetProductDetails();
        sellProductPointerList.push_back(selectedProduct);
    }

    return sellProductPointerList;
}