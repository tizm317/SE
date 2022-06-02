#pragma once
#include "SearchSellProductUI.h"
#include "SellHistory.h"

class SearchSellProduct
{
public:
	SearchSellProduct();
	void startInterface(FILE *out_fp, SellHistory *sellhistory, vector<Product *>);
	vector<Product *> ShowSellProductList(SellHistory *sellhistory, vector<Product *>); // 여기가 문제임. 일단 list받고 그 다음 product에 접근?
};