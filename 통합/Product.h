#pragma once
#include <string>

using namespace std;

class Product
{
private:
	string sellerId;
	string productName;
	string companyName;
	float avgPurchaseSatisfaction;
	int myPurchaseSatisfaction;
	int cost;
	int count;
	int sellCount;
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
	float getAvgPurchaseSatisfaction();
	Product* getPointer();
};

