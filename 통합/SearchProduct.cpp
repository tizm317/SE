#include "SearchProduct.h"

SearchProduct::SearchProduct()
{
}

SearchProduct::SearchProduct(FILE* in_fp, FILE* out_fp, vector<Product*> productList)
{
	// ��Ʈ��Ŭ������ �ٿ���� �ּ� ����
	//*searchProductUIptr = 
	SearchProductUI searchProductUI(in_fp, out_fp, this, productList);

}

Product* SearchProduct::startInterface(FILE* in_fp, FILE* out_fp, vector<Product*> productList)
{
	//SearchProductUI searchProductUI(in_fp, out_fp, this, productList);
	SearchProductUI searchProductUI;
	Product* Productptr = searchProductUI.startInterface(in_fp, out_fp, this, productList);

	return Productptr;
}

Product* SearchProduct::ShowProductDetails(string ProductName, vector<Product*> productList)
{
	Product* selectedProduct = nullptr;

	for (auto& itr : productList)
	{
		if (ProductName == itr->getProductName())
		{
			selectedProduct = itr->getProductDetails();
			return selectedProduct;
		}
	}


	return selectedProduct;

}
