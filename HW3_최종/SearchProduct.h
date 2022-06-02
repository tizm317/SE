#pragma once
#include "SearchProductUI.h"

// 상품 검색 컨트롤 클래스
class SearchProductUI;

class SearchProduct
{
private:
	Product selectedproduct;
	//SearchProductUI* searchProductUIptr;
public:
	SearchProduct();
	SearchProduct(FILE* in_fp, FILE* out_fp, vector<Product*>);
	Product* startInterface(FILE* in_fp, FILE* out_fp, vector<Product*>); // 생성자 말고 이거로 바꾸자
	Product* ShowProductDetails(string ProductName, vector<Product*>);
};

