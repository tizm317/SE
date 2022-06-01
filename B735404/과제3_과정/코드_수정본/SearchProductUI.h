#pragma once
#include <iostream>
#include <vector>
#include "Product.h"
#include "SearchProduct.h"

class SearchProduct;

class SearchProductUI
{
private:
	//string ProductName;
	char ProductName[100];
	SearchProduct* searchProductptr;
public:
	SearchProductUI();
	SearchProductUI(FILE* in_fp, FILE* out_fp, SearchProduct*, vector<Product*>);
	Product* startInterface(FILE* in_fp, FILE* out_fp, SearchProduct*, vector<Product*>); // �̰ŷ� �ٲ���
	Product* InputProductName(vector<Product*>);
};


