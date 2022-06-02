#pragma once
#include "SearchSoldOutProductUI.h"
#include "SellHistory.h"

class SearchSoldOutProduct
{
public:
	SearchSoldOutProduct();
	void startInterface(FILE *out_fp, SellHistory *sellhistory, vector<Product *>);
	vector<Product *> showSoldOutProductList(SellHistory *sellhistory, vector<Product *>);
};