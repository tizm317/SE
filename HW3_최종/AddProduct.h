#pragma once
#include "AddProductUI.h"
#include "SellHistory.h"

class AddProduct
{
public:
	AddProduct();
	void startInterface(FILE *in_fp, FILE *out_fp, SellHistory *sellhistory, vector<Product *>);
	void showAddProduct(string productName, string companyName, int price, int count, SellHistory *sellhistory, vector<Product *>);
};