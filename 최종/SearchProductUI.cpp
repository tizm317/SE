#include "SearchProductUI.h"

SearchProductUI::SearchProductUI()
{
}

SearchProductUI::SearchProductUI(FILE* in_fp, FILE* out_fp, SearchProduct* searchProductptr, vector<Product*> productList)
{
	int temp = fscanf(in_fp, "%s", productName);

	this->searchProductptr = searchProductptr;

	Product* ProductPointer = nullptr;

	ProductPointer = this->inputProductName(productList);
	
	fprintf(out_fp, "%s %s %s %d %d %f", ProductPointer->getSellerID().c_str(), ProductPointer->getProductName().c_str(), ProductPointer->getCompanyName().c_str(), ProductPointer->getCost(), ProductPointer->getCount(), ProductPointer->getAvgPurchaseSatisfaction());
}

Product* SearchProductUI::startInterface(FILE* in_fp, FILE* out_fp, SearchProduct* searchProductptr, vector<Product*> productList)
{
	int temp = fscanf(in_fp, "%s", productName);

	this->searchProductptr = searchProductptr;

	Product* productPointer = nullptr;

	productPointer = this->inputProductName(productList);

	fprintf(out_fp, "4.1. 상품 정보 검색\n");
	fprintf(out_fp, "> %s %s %s %d %d %f\n", productPointer->getSellerID().c_str(), productPointer->getProductName().c_str(), productPointer->getCompanyName().c_str(), productPointer->getCost(), productPointer->getCount(), productPointer->getAvgPurchaseSatisfaction());
	fprintf(out_fp, "\n");

	return productPointer;
}

Product* SearchProductUI::inputProductName(vector<Product*> productList)
{
	Product* productPointer = nullptr;

	productPointer = this->searchProductptr->showProductDetails(productName, productList);
	
	return productPointer;
}