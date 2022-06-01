#include "Product.h"
#include <iostream>

Product::Product()
{
	// �׽�Ʈ��

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
	// �׳� ������Ʈ �������� �ٲ���

	// �ϴ� ���⼭ ����ϵ��� �غ���
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
	else // Count �� ���� ���
		cout << "There is no remain product." << endl;
}

void Product::GetProducts()
{
}

void Product::ChangeAvgPurchaseSatisfaction(int inputValue)
{
	float satisfaction = this->AvgPurchaseSatisfaction;
	int count = this->sellCount;

	if (this->myPurchaseSatisfaction == 0) // �� �� �Ѱ�� (�� 1~5�� ����������)
	{
		this->myPurchaseSatisfaction = inputValue;
		this->AvgPurchaseSatisfaction = (satisfaction * count + inputValue) / count;
	}
	else // �� �̹��ϰ�, �ٲٴ� ���
	{
		// ���� ���� �ߴ� �� ������ ���� ��
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


