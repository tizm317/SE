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
		fprintf(out_fp, "> %s %s %d %d\n", itr->GetProductName().c_str(), itr->GetCompanyName().c_str(), itr->GetCost(), itr->GetCount());
    }
	fprintf(out_fp, "\n");
}

vector<Product *> SearchSellProductUI::doSearchSellProduct(SearchSellProduct *searchSellProductPointer, SellHistory *sellProductList, vector<Product *> productList)
{
	vector<Product *> sellProductPointerList;

	sellProductPointerList = this->searchSellProductPointer->ShowSellProductList(sellProductList, productList); // boundary에서 control의 함수 호출
	
	return sellProductPointerList; // 연쇄호출로 getDetail한 product배열을 리턴함
}