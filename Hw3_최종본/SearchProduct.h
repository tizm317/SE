#pragma once
#include "SearchProductUI.h"

class SearchProductUI;

/*
클래스 이름: SearchProduct
기능(설명): 상품 정보 검색 기능을 수행한다.
*/
class SearchProduct
{
private:
	Product selectedproduct;
public:
	SearchProduct();
	SearchProduct(FILE* in_fp, FILE* out_fp, vector<Product*>);
	Product* startInterface(FILE* in_fp, FILE* out_fp, vector<Product*>);
	Product* showProductDetails(string ProductName, vector<Product*>);
};