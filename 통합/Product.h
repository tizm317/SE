#pragma once
#include <string>

using namespace std;

class Product
{
private:
	string sellerId = "test";
	string productName = "testProduct";
	string companyName = "testCompany";
	float avgPurchaseSatisfaction = 0.0;
	int myPurchaseSatisfaction = 0;
	int cost = 1000;
	int count = 10;
	int sellCount = 0;
public:
	Product();
	Product(string productName);
	Product(string productName, string companyName, int cost, int count);
	Product *getProductDetails();
	string getProductName();
	string getSellerId();
	string getCompanyName();
	void reduceCount();
	void getProducts();
	void changeAvgPurchaseSatisfaction(int);
	int getCost();
	int getCount();
	float getAvgPurchaseSatisfaction();
	Product* getPointer();
};

