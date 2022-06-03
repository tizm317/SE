#pragma once
#include <iostream>
#include <vector>
#include "Product.h"
#include "SearchProduct.h"

class SearchProduct;

/*
클래스 이름: SearchProductUI
기능(설명): Boundary class / 상품 정보 검색 기능 입출력 담당으로 상품명을 입력받고 해당하는 상품에 대한
			판매자ID, 상품명, 제작회사명, 가격, 남은수량, 평균 구매만족도를 출력한다
*/
class SearchProductUI
{
private:
	char productName[100];
	SearchProduct* searchProductptr;
public:
	SearchProductUI();
	SearchProductUI(FILE* in_fp, FILE* out_fp, SearchProduct*, vector<Product*>);
	Product* startInterface(FILE* in_fp, FILE* out_fp, SearchProduct*, vector<Product*>);
	Product* inputProductName(vector<Product*>);
};