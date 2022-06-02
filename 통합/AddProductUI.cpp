#include "AddProductUI.h"

AddProductUI::AddProductUI()
{
}

void AddProductUI::startInterface(FILE *in_fp, FILE *out_fp, AddProduct *addProductPointer, SellHistory *sellProductList, vector<Product *> productList)
{
    fscanf(in_fp, "%s %s %d %d", productName, companyName, &price, &count);

	this->addProductPointer = addProductPointer;

	this->doAddProduct(addProductPointer, productName, companyName, price, count, sellProductList, productList);

    fprintf(out_fp, "3.1. 판매 의류 등록\n");
    fprintf(out_fp, "> %s %s %d %d\n", productName, companyName, price, count);
    fprintf(out_fp, "\n");
}

void AddProductUI::doAddProduct(AddProduct *addProductPointer, string productName, string companyName, int cost, int count, SellHistory *sellProductList, vector<Product *>productList)
{
    this->addProductPointer->showAddProduct(productName, companyName, cost, count, sellProductList, productList);
}
