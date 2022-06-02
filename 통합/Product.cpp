#include "Product.h"
#include <iostream>

Product::Product()
{
	
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