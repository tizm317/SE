#include "Product.h"
#include <iostream>

Product::Product()
{
	// 테스트용

	SellerID = "test";
	ProductName = "testProduct";
	CompanyName = "testCompany";
	cost = 1000;
	AvgPurchaseSatisfaction = 0;
	Count = 10;
}

Product::Product(string name)
{
	SellerID = "test";
	ProductName = name;
	CompanyName = "testCompany";
	cost = 1000;
	AvgPurchaseSatisfaction = 0;
	Count = 10;
}

Product* Product::GetProductDetails()
{
	// 그냥 오브젝트 리턴으로 바꾸자

	// 일단 여기서 출력하도록 해보자
	cout << SellerID << endl;
	cout << ProductName << endl;
	cout << CompanyName << endl;
	cout << AvgPurchaseSatisfaction << endl;
	cout << Count << endl;

	return this;

	//productInfo info;



	//return info;
}

void Product::ReduceCount()
{
	if (this->Count > 0)
	{
		this->Count--;
		this->sellCount++;
	}
	else // Count 가 없는 경우
		cout << "There is no remain product." << endl;
}

void Product::GetProducts()
{
}

void Product::ChangeAvgPurchaseSatisfaction(int inputValue)
{
	float satisfaction = this->AvgPurchaseSatisfaction;
	int count = this->sellCount;

	if (this->myPurchaseSatisfaction == 0) // 평가 안 한경우 (평가 1~5라 가정했을때)
	{
		this->myPurchaseSatisfaction = inputValue;
		this->AvgPurchaseSatisfaction = (satisfaction * count + inputValue) / count;
	}
	else // 평가 이미하고, 바꾸는 경우
	{
		// 내가 전에 했던 평가 전으로 돌린 후
		satisfaction = (satisfaction * count) - (this->myPurchaseSatisfaction);
		this->AvgPurchaseSatisfaction = (satisfaction + inputValue) / count;
	}


}

string Product::GetProductName()
{
	return this->ProductName;
}

string Product::GetSellerID()
{
	return this->SellerID;
}

string Product::GetCompanyName()
{
	return this->CompanyName;
}

int Product::GetCost()
{
	return this->cost;
}

int Product::GetCount()
{
	return this->Count;
}

float Product::GetAvgPurchaseSatisfaction()
{
	return this->AvgPurchaseSatisfaction;
}

Product* Product::GetPointer()
{
	return this;
}


