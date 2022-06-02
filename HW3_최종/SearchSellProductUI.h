#pragma once
#include <iostream>
#include <vector>
#include "Product.h"
#include "SearchSellProduct.h"

class SearchSellProduct;
class SellHistory;

class SearchSellProductUI
{
private:
	SearchSellProduct* searchSellProductPointer;
public:
	SearchSellProductUI();
	void startInterface(FILE* out_fp, SearchSellProduct *, SellHistory *, vector<Product *>);
	vector<Product *> doSearchSellProduct(SearchSellProduct *, SellHistory *, vector<Product *>);
};