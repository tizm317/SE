#pragma once
#include "AddProductUI.h"
#include "SellHistory.h"

class AddProduct
{
public:
	AddProduct();
	void startInterface(FILE *, FILE *p, SellHistory *, vector<Product *>);
	void showAddProduct(string, string, int, int, SellHistory *, vector<Product *>);
};