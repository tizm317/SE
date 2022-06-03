#pragma once
#include <iostream>
#include <vector>
#include "Product.h"
#include "SearchSoldOutProduct.h"

class SearchSoldOutProduct;
class SellHistory;

/*
클래스 이름: SearchSoldOutProductUI
기능(설명): Boundary class / 판매 완료 상품 조회 기능 입출력 담당으로 상품명, 제작회사명, 가격, 판매된 수량, 평균 구매만족도를 출력한다.
*/
class SearchSoldOutProductUI
{
private:
	SearchSoldOutProduct* searchSoldOutProductPointer;
public:
	SearchSoldOutProductUI();
	void startInterface(FILE* out_fp, SearchSoldOutProduct *, SellHistory *, vector<Product *>);
	vector<Product *> doSearchSoldOutProduct(SearchSoldOutProduct *, SellHistory *, vector<Product *>);
};