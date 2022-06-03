#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Product.h"
#include "AddProduct.h"

class AddProduct;
class SellHistory;

/*
클래스 이름: AddProductUI
기능(설명): Boundary class / 판매 의류 등록 입출력 담당
*/
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