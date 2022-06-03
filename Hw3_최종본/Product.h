#pragma once
#include <string>
#include <math.h>
using namespace std;

/*
클래스 이름: Product
기능(설명): 의류 상품 클래스로 상품의 제품명, 제작회사명, 가격, 팔린 수량, 평균 구매만족도 등을 가지며 이를 반환할 수 있는 함수가 작성되어있다.
*/
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

