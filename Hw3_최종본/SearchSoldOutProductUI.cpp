#include "SearchSoldOutProductUI.h"

SearchSoldOutProductUI::SearchSoldOutProductUI()
{
}

void SearchSoldOutProductUI::startInterface(FILE* out_fp, SearchSoldOutProduct *searchSoldOutProductPointer, SellHistory *sellProductList, vector<Product *> productList)
{
    this->searchSoldOutProductPointer = searchSoldOutProductPointer;

    vector<Product *> soldOutProductListPointer;

    soldOutProductListPointer = this->doSearchSoldOutProduct(searchSoldOutProductPointer, sellProductList, productList);

    fprintf(out_fp, "3.3. 판매 완료 상품 조회\n");
    for(auto &itr : soldOutProductListPointer)
    {
        fprintf(out_fp, "> %s %s %d %d %.1f\n", itr->getProductName().c_str(), itr->getCompanyName().c_str(), itr->getCost(), itr->getSellCount(), itr->getAvgPurchaseSatisfaction());
    }
    fprintf(out_fp, "\n");
}

vector<Product *> SearchSoldOutProductUI::doSearchSoldOutProduct(SearchSoldOutProduct *searchSoldOutProductPointer, SellHistory *sellProductList, vector<Product *> productList)
{
    vector<Product *> soldOutProductListPointer;

    soldOutProductListPointer = this->searchSoldOutProductPointer->showSoldOutProductList(sellProductList, productList);
    
    return soldOutProductListPointer;
}