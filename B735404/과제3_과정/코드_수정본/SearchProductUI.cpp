#include "SearchProductUI.h"

SearchProductUI::SearchProductUI()
{
}

SearchProductUI::SearchProductUI(FILE* in_fp, FILE* out_fp, SearchProduct* searchProductptr, vector<Product*> productList)
{
	int temp = fscanf(in_fp, "%s", ProductName);

	// 바운더리가 컨트롤클래스의 포인터 가짐
	this->searchProductptr = searchProductptr;


	Product* ProductPointer = nullptr;

	ProductPointer = this->InputProductName(productList);

	//ProductPointer->GetProductDetails();
	
	fprintf(out_fp, "%s %s %s %d %d %f", ProductPointer->GetSellerID().c_str(), ProductPointer->GetProductName().c_str(), ProductPointer->GetCompanyName().c_str(), ProductPointer->GetCost(), ProductPointer->GetCount(), ProductPointer->GetAvgPurchaseSatisfaction());
}

Product* SearchProductUI::startInterface(FILE* in_fp, FILE* out_fp, SearchProduct* searchProductptr, vector<Product*> productList)
{
	int temp = fscanf(in_fp, "%s", ProductName);

	// 바운더리가 컨트롤클래스의 포인터 가짐
	this->searchProductptr = searchProductptr;


	Product* ProductPointer = nullptr;

	ProductPointer = this->InputProductName(productList);

	//ProductPointer->GetProductDetails();

	fprintf(out_fp, "%s %s %s %d %d %f", ProductPointer->GetSellerID().c_str(), ProductPointer->GetProductName().c_str(), ProductPointer->GetCompanyName().c_str(), ProductPointer->GetCost(), ProductPointer->GetCount(), ProductPointer->GetAvgPurchaseSatisfaction());


	return ProductPointer;
}

Product* SearchProductUI::InputProductName(vector<Product*> productList)
{
	Product* ProductPointer = nullptr;

	ProductPointer = this->searchProductptr->ShowProductDetails(ProductName, productList);
	
	
	return ProductPointer;
}
