#include "AddProduct.h"
#include "Product.h"
#include "SellHistory.h"

AddProduct::AddProduct()
{
}

void AddProduct::startInterface(FILE *in_fp, FILE *out_fp, SellHistory *sellProductList, vector<Product *> productList)
{
	AddProductUI addProductUI;
    addProductUI.startInterface(in_fp, out_fp, this, sellProductList, productList);
}

void AddProduct::showAddProduct(string productName, string companyName, int price, int count, SellHistory *sellHistory, vector<Product *> productList)
{
    Product *newProduct = new Product(productName, companyName, price, count);

    sellHistory->addSellHistory(newProduct);
}