#pragma once
#include <string>

using namespace std;

class Product
{
private:
	string productName;
	string companyName;
	int cost;
	int count; // 전체 개수
	int sellCount; // 판매 개수
public:
	// 테스트용 생성자들
	Product();
	Product(string name);
	Product(string productName, string companyName, int cost, int count);
	// 기존
	Product *GetProductDetails();
	// 추가
	// Product *createNewProduct(string productName, string companyName, int cost, int price);
	string GetProductName();
	string GetSellerID();
	string GetCompanyName();
	int GetCost();
	int GetCount();
};

