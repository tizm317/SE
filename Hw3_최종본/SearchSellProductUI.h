#pragma once
#include <iostream>
#include <vector>
#include "Product.h"
#include "SearchSellProduct.h"

class SearchSellProduct;
class SellHistory;

/*
클래스 이름: SearchSellProductUI
기능(설명): Boundary class / 등록 상품 조회 기능 입출력 담당으로 상품명, 제작회사명, 가격, 수량을 출력한다.
*/
class SearchSellProductUI
{
private:
	SearchSellProduct* searchSellProductPointer;
public:
	SearchSellProductUI();
	void startInterface(FILE* out_fp, SearchSellProduct *, SellHistory *, vector<Product *>);
	vector<Product *> doSearchSellProduct(SearchSellProduct *, SellHistory *, vector<Product *>);
};