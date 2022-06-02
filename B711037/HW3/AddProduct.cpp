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
    // 1. createNewProduct
    Product *newProduct = new Product(productName, companyName, price, count);
    productList.push_back(newProduct); // sellHistory에서 정보 받아오므로 productList에 push_back안해도 정상 파일 출력됨

    // 2. AddSellHistory
    sellHistory->AddSellHistory(newProduct); // 따라서, 이 코드가 실행 안되면 3-2에서 상품 조회 불가능함
}