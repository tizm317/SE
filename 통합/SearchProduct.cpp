#include "SearchProduct.h"

SearchProduct::SearchProduct()
{
}

SearchProduct::SearchProduct(FILE *in_fp, FILE *out_fp, vector<Product *> productList)
{
	SearchProductUI searchProductUI(in_fp, out_fp, this, productList);

}

Product *SearchProduct::startInterface(FILE *in_fp, FILE *out_fp, vector<Product *> productList)
{
	SearchProductUI searchProductUI;
	Product *Productptr = searchProductUI.startInterface(in_fp, out_fp, this, productList);

	return Productptr;
}

Product *SearchProduct::showProductDetails(string productName, vector<Product*> productList)
{
	Product *selectedProduct = nullptr;

	for(auto& itr : productList)
	{
		if (productName == itr->getProductName())
		{
			selectedProduct = itr->getProductDetails();
			return selectedProduct;
		}
	}

	return selectedProduct;
}
