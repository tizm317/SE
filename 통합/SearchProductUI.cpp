#include "SearchProductUI.h"

SearchProductUI::SearchProductUI()
{
}

SearchProductUI::SearchProductUI(FILE* in_fp, FILE* out_fp, SearchProduct* searchProductptr, vector<Product*> productList)
{
	int temp = fscanf(in_fp, "%s", ProductName);

	// �ٿ������ ��Ʈ��Ŭ������ ������ ����
	this->searchProductptr = searchProductptr;


	Product* ProductPointer = nullptr;

	ProductPointer = this->InputProductName(productList);
	
	fprintf(out_fp, "%s %s %s %d %d %f", ProductPointer->getSellerID().c_str(), ProductPointer->getProductName().c_str(), ProductPointer->getCompanyName().c_str(), ProductPointer->getCost(), ProductPointer->getCount(), ProductPointer->getAvgPurchaseSatisfaction());
}

Product* SearchProductUI::startInterface(FILE* in_fp, FILE* out_fp, SearchProduct* searchProductptr, vector<Product*> productList)
{
	int temp = fscanf(in_fp, "%s", ProductName);

	// �ٿ������ ��Ʈ��Ŭ������ ������ ����
	this->searchProductptr = searchProductptr;


	Product* ProductPointer = nullptr;

	ProductPointer = this->InputProductName(productList);

	//ProductPointer->GetProductDetails();

	fprintf(out_fp, "%s %s %s %d %d %f", ProductPointer->getSellerID().c_str(), ProductPointer->getProductName().c_str(), ProductPointer->getCompanyName().c_str(), ProductPointer->getCost(), ProductPointer->getCount(), ProductPointer->getAvgPurchaseSatisfaction());


	return ProductPointer;
}

Product* SearchProductUI::InputProductName(vector<Product*> productList)
{
	Product* ProductPointer = nullptr;

	ProductPointer = this->searchProductptr->ShowProductDetails(ProductName, productList);
	
	
	return ProductPointer;
}
