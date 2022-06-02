#include "Product.h"
#include <iostream>

Product::Product()
{
}

// Product::Product(string name)
// {
// 	productName = name;
// 	companyName = "testCompany";
// 	cost = 1000;
// 	count = 10;
// 	sellCount = 0;
// }

Product* Product::GetProductDetails()
{
	// cout << ProductName << '\n';
	// cout << CompanyName << '\n';
    // cout << cost << '\n';
	// cout << count << '\n';
    // cout << sellCount << '\n';

	return this;
}

// this로 하니깐 정상 반영됨
Product::Product(string productName, string companyName, int cost, int count)
{
	this->productName = productName;
	this->companyName = companyName;
	this->cost = cost;
	this->count = count;
}


string Product::GetProductName()
{
	return this->productName;
}

string Product::GetCompanyName()
{
	return this->companyName;
}

int Product::GetCost()
{
	return this->cost;
}

int Product::GetCount()
{
	return this->count;
}