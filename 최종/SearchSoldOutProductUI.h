#pragma once
#include <iostream>
#include <vector>
#include "Product.h"
#include "SearchSoldOutProduct.h"

class SearchSoldOutProduct;
class SellHistory;

class SearchSoldOutProductUI
{
private:
	SearchSoldOutProduct* searchSoldOutProductPointer;
public:
	SearchSoldOutProductUI();
	void startInterface(FILE* out_fp, SearchSoldOutProduct *, SellHistory *, vector<Product *>);
	vector<Product *> doSearchSoldOutProduct(SearchSoldOutProduct *, SellHistory *, vector<Product *>);
};