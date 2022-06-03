#pragma once
#include "Product.h"
#include <vector>

/*
클래스 이름: SellHistory
기능(설명): 판매 등록한 상품 내역을 저장하는 클래스.
*/
class SellHistory
{
private:
	vector<Product*> productList;
public:
	SellHistory();
	void addSellHistory(Product *);
	vector<Product *> listProducts();
};
