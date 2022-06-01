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
	int myPurchaseSatisfaction = 0; // 추가) 이미 내가 평가한 경우 저장해두기 위한 용도..?
	int Count = 10; // 전체 개수
	int sellCount = 0; // 판매 개수
public:
	// 테스트용 생성자들
	Product();
	Product(string name);
	//
	Product* GetProductDetails();
	void ReduceCount();
	void GetProducts();
	void ChangeAvgPurchaseSatisfaction(int);
	// 추가
	string GetProductName();
	string GetSellerID();
	string GetCompanyName();
	int GetCost();
	int GetCount();
	float GetAvgPurchaseSatisfaction();
	Product* GetPointer();
};

