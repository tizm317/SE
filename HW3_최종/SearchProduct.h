#pragma once
#include "SearchProductUI.h"

// ��ǰ �˻� ��Ʈ�� Ŭ����
class SearchProductUI;

class SearchProduct
{
private:
	Product selectedproduct;
	//SearchProductUI* searchProductUIptr;
public:
	SearchProduct();
	SearchProduct(FILE* in_fp, FILE* out_fp, vector<Product*>);
	Product* startInterface(FILE* in_fp, FILE* out_fp, vector<Product*>); // ������ ���� �̰ŷ� �ٲ���
	Product* ShowProductDetails(string ProductName, vector<Product*>);
};

