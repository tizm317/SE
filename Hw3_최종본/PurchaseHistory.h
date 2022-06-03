#pragma once
#include "Product.h"
#include <vector>

/*
클래스 이름: PurchaseHistory
기능(설명): 구매한 상품 내역을 저장하는 클래스.
*/
class PurchaseHistory
{
private:
	vector<Product*> productList;
public:
	PurchaseHistory();
	void addPurchaseHistory(Product*);
	vector<Product*> listProducts();
};

