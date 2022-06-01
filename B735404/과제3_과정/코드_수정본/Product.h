#pragma once
#include <string>

using namespace std;

class Product
{
private:
	string SellerID = "test";
	string ProductName = "testProduct";
	string CompanyName = "testCompany";
	int cost = 1000;
	float AvgPurchaseSatisfaction = 0.0;
	int myPurchaseSatisfaction = 0; // �߰�) �̹� ���� ���� ��� �����صα� ���� �뵵..?
	int Count = 10; // ��ü ����
	int sellCount = 0; // �Ǹ� ����
public:
	// �׽�Ʈ�� �����ڵ�
	Product();
	Product(string name);
	//
	Product* GetProductDetails();
	void ReduceCount();
	void GetProducts();
	void ChangeAvgPurchaseSatisfaction(int);
	// �߰�
	string GetProductName();
	string GetSellerID();
	string GetCompanyName();
	int GetCost();
	int GetCount();
	float GetAvgPurchaseSatisfaction();
	Product* GetPointer();
};

