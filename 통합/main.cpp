#include <iostream>
#include "SearchSellProduct.h"
#include "SearchSoldOutProduct.h"
#include "AddProduct.h"
#include "PurchaseHistoryInquiry.h"
#include "PurchaseSatisfactionEvaluation.h"
#include "SearchProduct.h"
#include "PurchaseProduct.h"

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void join();
void program_exit();

// 변수 선언
FILE *in_fp, *out_fp;
Product* selectedProduct;


int main()
{
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}

void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    vector<Product*> productList;
    SellHistory sellHistory;
    PurchaseHistory purchaseHistory;

    while(!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // 메뉴 구분 및 해당 연산 수행
        switch(menu_level_1)
        {
            case 1:
            {
                switch(menu_level_2)
                {
                    case 1: // "1.1. 회원가입“ 메뉴 부분
                    {
                        break;
                    }
                    case 2:
                    {
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                switch(menu_level_2)
                {
                    case 1:
                    {
                        break;
                    }
                    case 2:
                    {
                        break;
                    }
                }
                break;
            }
            case 3:
            {
                switch(menu_level_2)
                {
                    case 1:
                    {
                        // 3.1 판매 의류 등록
                        AddProduct controlPointer;
                        controlPointer.startInterface(in_fp, out_fp, &sellHistory, productList);
                        break;
                    }
                    case 2:
                    {
                        // 3.2 등록 상품 조회
                        SearchSellProduct controlPointer;
                        controlPointer.startInterface(out_fp, &sellHistory, productList);
                        break;
                    }
                    case 3:
                    {
                        // 3.3 판매 완료 상품 조회
                        SearchSoldOutProduct controlPointer;
                        controlPointer.startInterface(out_fp, &sellHistory, productList);
                        break;
                    }
                }
                break;
            }
            case 4:
            {
                switch(menu_level_2)
                {
                    case 1:
                    {
                        // 4.1 상품 정보 검색
                        SearchProduct searchProduct;
                        selectedProduct = searchProduct.startInterface(in_fp, out_fp, sellHistory.listProducts());
                        break;
                    }
                    case 2:
                    {
                        // 4.2. 상품 구매
                        PurchaseProduct purchaseProduct;
                        purchaseProduct.startInterface(out_fp , &purchaseHistory, selectedProduct);
                        break;
                    }
                    case 3:
                    {
                        //4.3. 상품 구매 내역 조회
                        PurchaseHistoryInquiry *purchaseHistoryInquiry = new PurchaseHistoryInquiry();
                        purchaseHistoryInquiry->startInterface(in_fp, out_fp, &purchaseHistory); 
                        break;
                    }
                    case 4:
                    {
                        // 4.4. 상품 구매만족도 평가
                        PurchaseSatisfactionEvaluation* purchaseSatisfactionEvaluation = new PurchaseSatisfactionEvaluation();
                        purchaseSatisfactionEvaluation->startInterface(in_fp, out_fp, &purchaseHistory);
                    }
                }
                break;
            }
             case 6:
             {
                 switch(menu_level_2)
                 {
                     case 1: // "6.1. 종료“ 메뉴 부분
                     {
                        is_program_exit = 1;
                        break;
                     }
                 }
             }
        }
    }
    return;
}