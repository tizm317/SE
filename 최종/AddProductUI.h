#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Product.h"
#include "AddProduct.h"

class AddProduct;
class SellHistory;

class AddProductUI
{
private:
    char productName[20];
    char companyName[20];
    int price;
    int count;
	AddProduct* AddProductPointer;
public:
	AddProductUI();
	void startInterface(FILE *, FILE *, AddProduct *, SellHistory *, vector<Product *>);
    void doAddProduct(AddProduct *,  string, string, int, int, SellHistory *, vector<Product *>);
};