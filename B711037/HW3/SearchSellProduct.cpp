#include "SearchSellProduct.h"
#include "SellHistory.h"

SearchSellProduct::SearchSellProduct()
{
}

void SearchSellProduct::startInterface(FILE *out_fp, SellHistory *sellProductList, vector<Product *> productList)
{
	SearchSellProductUI searchSellProductUI;
    searchSellProductUI.startInterface(out_fp, this, sellProductList, productList);
}

vector<Product *> SearchSellProduct::showSellProductList(SellHistory *sellHistory, vector<Product *> productList)
{
    vector<Product *> sellProductPointerList;
    
    vector<Product *> sellProductList = sellHistory->listProducts(); // sellHistory에서 다 접근함
    for(auto& itr : sellProductList)
    {
        Product *selectedProduct = itr->getProductDetails(); // 해당 product 정보 통째로 반환
        sellProductPointerList.push_back(selectedProduct);
    }

    return sellProductPointerList;
}