#include "SearchSellProductUI.h"

SearchSellProductUI::SearchSellProductUI()
{
}

void SearchSellProductUI::startInterface(FILE* out_fp, SearchSellProduct *searchSellProductPointer, SellHistory *sellProductList, vector<Product *> productList)
{
	this->searchSellProductPointer = searchSellProductPointer;

	vector<Product *> sellProductPointerList;

	sellProductPointerList = this->doSearchSellProduct(searchSellProductPointer, sellProductList, productList);

	fprintf(out_fp, "3.2. 등록 상품 조회\n");
    for(auto &itr : sellProductPointerList)
    {
		fprintf(out_fp, "> %s %s %d %d\n", itr->getProductName().c_str(), itr->getCompanyName().c_str(), itr->getCost(), itr->getCount());
    }
	fprintf(out_fp, "\n");
}

vector<Product *> SearchSellProductUI::doSearchSellProduct(SearchSellProduct *searchSellProductPointer, SellHistory *sellProductList, vector<Product *> productList)
{
	vector<Product *> sellProductPointerList;

	sellProductPointerList = this->searchSellProductPointer->showSellProductList(sellProductList, productList);
	
	return sellProductPointerList;
}