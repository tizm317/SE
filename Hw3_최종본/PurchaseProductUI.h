#pragma once
#include <string>
#include "PurchaseProduct.h"

using namespace std;

class PurchaseProduct;

/*
클래스 이름: PurchaseProductUI
기능(설명): Boundary class / 상품 구매기능 입출력 담당으로 판매자ID, 상품명을 출력한다.
*/
class PurchaseProductUI
{
public:
	void clickPurchaseButton(FILE*, PurchaseHistory*, Product*);
};

