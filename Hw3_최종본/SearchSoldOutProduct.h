#pragma once
#include "SearchSoldOutProductUI.h"
#include "SellHistory.h"

/*
클래스 이름: SearchSoldOutProduct
기능(설명): 판매 완료된 상품들을 조회한다.
*/
class SearchSoldOutProduct
{
public:
	SearchSoldOutProduct();
	void startInterface(FILE *out_fp, SellHistory *sellhistory, vector<Product *>);
	vector<Product *> showSoldOutProductList(SellHistory *sellhistory, vector<Product *>);
};