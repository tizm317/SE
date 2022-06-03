#pragma once
#include "AddProductUI.h"
#include "SellHistory.h"


/*
클래스 이름: AddProduct
기능(설명): 판매자가 판매하고자 하는 의류를 등록한다
*/
class AddProduct
{
public:
	AddProduct();
	void startInterface(FILE *in_fp, FILE *out_fp, SellHistory *sellhistory, vector<Product *>);
	void showAddProduct(string productName, string companyName, int price, int count, SellHistory *sellhistory, vector<Product *>);
};