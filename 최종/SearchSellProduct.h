#pragma once
#include "SearchSellProductUI.h"
#include "SellHistory.h"

class SearchSellProduct
{
public:
	SearchSellProduct();
	void startInterface(FILE *out_fp, SellHistory *sellhistory, vector<Product *>);
	vector<Product *> showSellProductList(SellHistory *sellhistory, vector<Product *>);
};