#pragma once
#include "SearchSellProductUI.h"
#include "SellHistory.h"

/*
클래스 이름: SearchSellProduct
기능(설명): 판매 등록된 모든 상품들을 조회한다.
*/
class SearchSellProduct
{
public:
	SearchSellProduct();
	void startInterface(FILE *out_fp, SellHistory *sellhistory, vector<Product *>);
	vector<Product *> showSellProductList(SellHistory *sellhistory, vector<Product *>);
};