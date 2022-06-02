#include "SearchSoldOutProduct.h"
#include "SellHistory.h"

SearchSoldOutProduct::SearchSoldOutProduct()
{
}

void SearchSoldOutProduct::startInterface(FILE *out_fp, SellHistory *sellProductList, vector<Product *> productList)
{
	SearchSoldOutProductUI searchSoldOutProductUI;
    searchSoldOutProductUI.startInterface(out_fp, this, sellProductList, productList);
}

vector<Product *> SearchSoldOutProduct::showSoldOutProductList(SellHistory *sellHistory, vector<Product *> productList)
{
    vector<Product *> soldOutProductListPointer; // push_back 작업 필요
    
    vector<Product *> sellProductList = sellHistory->listProducts();
    for(auto& itr : sellProductList)
    {
        // sellList의 제품 중 남은 개수가 0인 경우만 push_back
        if(itr->getCount() == 0)
        {
            Product *soldOutProduct = itr->getProductDetails();
            soldOutProductListPointer.push_back(soldOutProduct);
        }
    }

    return soldOutProductListPointer;
}