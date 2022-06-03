#pragma once
#include <string>
#include <math.h>

using namespace std;

class Product
{
private:
	string sellerId = "mbc";
	string productName = "testProduct";
	string companyName = "testCompany";
	float avgPurchaseSatisfaction = 0.0;
	int myPurchaseSatisfaction = 0;
	int cost = 1000;
	int count = 10;
	int sellCount = 0;
	int satisfactionCount = 0;
public:
	Product();
	Product(string productName);
	Product(string productName, string companyName, int cost, int count);
	Product *getProductDetails();
	string getProductName();
	string getSellerID();
	string getCompanyName();
	void reduceCount();
	void getProducts();
	void changeAvgPurchaseSatisfaction(int);
	int getCost();
	int getCount();
	int getSellCount();
	int getMyPurchaseSatisfaction();
	float getAvgPurchaseSatisfaction();
	Product* getPointer();
};

