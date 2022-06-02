#include "Product.h"
#include <iostream>

Product::Product()
{
	
}

Product::Product(string name)
{
	this->sellerId = "mbc";
	this->productName = name;
	this->companyName = "testCompany";
	this->cost = 1000;
	this->avgPurchaseSatisfaction = 0;
	this->count = 10;
}

Product* Product::getProductDetails()
{
	return this;
}

Product::Product(string productName, string companyName, int cost, int count)
{
	this->productName = productName;
	this->companyName = companyName;
	this->cost = cost;
	this->count = count;
}

void Product::reduceCount()
{
	if (this->count > 0)
	{
		this->count--;
		this->sellCount++;
	}
	else
	{
		cout << "There is no remain product." << endl;
	}
}

void Product::changeAvgPurchaseSatisfaction(int inputValue)
{
	float satisfaction = this->avgPurchaseSatisfaction;
	int count = this->sellCount;

	if (this->myPurchaseSatisfaction == 0)
	{
		this->myPurchaseSatisfaction = inputValue;
		this->avgPurchaseSatisfaction = (satisfaction * count + inputValue) / count;
	}
	else
	{
		satisfaction = (satisfaction * count) - (this->myPurchaseSatisfaction);
		this->avgPurchaseSatisfaction = (satisfaction + inputValue) / count;
	}
}


string Product::getProductName()
{
	return this->productName;
}

string Product::getCompanyName()
{
	return this->companyName;
}

int Product::getCost()
{
	return this->cost;
}

int Product::getCount()
{
	return this->count;
}

int Product::getSellCount()
{
	return sellCount;
}

float Product::getAvgPurchaseSatisfaction()
{
	return this->avgPurchaseSatisfaction;
}

Product* Product::getPointer()
{
	return this;
}

string Product::getSellerID()
{
	return this->sellerId;
}