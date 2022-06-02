#pragma once
#include "SearchProductUI.h"

class SearchProductUI;

class SearchProduct
{
private:
	Product selectedproduct;
public:
	SearchProduct();
	SearchProduct(FILE *in_fp, FILE *out_fp, vector<Product *>);
	Product* startInterface(FILE *in_fp, FILE *out_fp, vector<Product *>);
	Product* showProductDetails(string productName, vector<Product *>);
};