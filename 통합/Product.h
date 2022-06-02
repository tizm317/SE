#pragma once
#include <string>

using namespace std;

class Product
{
private:
	string productName;
	string companyName;
	int cost;
	int count; // 전체 개수
	int sellCount; // 판매 개수?
public:
	Product();
	Product(string productName, string companyName, int cost, int count);
	Product *getProductDetails();
	// Product *createNewProduct(string productName, string companyName, int cost, int price);
	string getProductName();
	string getSellerID();
	string getCompanyName();
	int getCost();
	int getCount();
};

