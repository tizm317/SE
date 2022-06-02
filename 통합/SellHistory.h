#pragma once
#include "Product.h"
#include <vector>

class SellHistory
{
private:
	vector<Product*> productList; // 아예 History에 Product 벡터를 넣어버림
public:
	SellHistory();
	void addSellHistory(Product *);
	vector<Product *> listProducts();
	int getLength();
};

