#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Product.h"
#include "AddProduct.h"

class AddProduct;
class SellHistory;

class AddProductUI // 여기에 멤버변수를 선언해줘야 AddProductUI.cpp 에서 파일 입출력이 가능하다
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