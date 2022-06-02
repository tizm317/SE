#include "SearchProductUI.h"

SearchProductUI::SearchProductUI()
{
}

SearchProductUI::SearchProductUI(FILE *in_fp, FILE *out_fp, SearchProduct *searchProductptr, vector<Product *> productList)
{
	fscanf(in_fp, "%s", productName);

	this->searchProductptr = searchProductptr;

	Product *productPointer = nullptr;

	productPointer = this->inputProductName(productList);
	
	fprintf(out_fp, "%s %s %s %d %d %f", productPointer->getSellerId().c_str(), productPointer->getProductName().c_str(), productPointer->getCompanyName().c_str(), productPointer->getCost(), productPointer->getCount(), productPointer->getAvgPurchaseSatisfaction());
}

Product* SearchProductUI::startInterface(FILE *in_fp, FILE *out_fp, SearchProduct *searchProductptr, vector<Product *> productList)
{
	fscanf(in_fp, "%s", productName);

	this->searchProductptr = searchProductptr;

	Product* productPointer = nullptr;

	productPointer = this->inputProductName(productList);

	fprintf(out_fp, "4.1. Search Product\n");
	fprintf(out_fp, "> %s %s %s %d %d %f\n", productPointer->getSellerId().c_str(), productPointer->getProductName().c_str(), productPointer->getCompanyName().c_str(), productPointer->getCost(), productPointer->getCount(), productPointer->getAvgPurchaseSatisfaction());

	return productPointer;
}

Product* SearchProductUI::inputProductName(vector<Product *> productList)
{
	Product* productPointer = nullptr;

	productPointer = this->searchProductptr->showProductDetails(productName, productList);
	
	return productPointer;
}
