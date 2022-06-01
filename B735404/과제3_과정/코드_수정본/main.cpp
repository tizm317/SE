#include <iostream>
#include "SearchProduct.h"
#include "PurchaseProduct.h"
//#include "PurchaseHistory.h"
#include "PurchaseHistoryInquiry.h"
#include "PurchaseSatisfactionEvaluation.h"


#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

FILE* in_fp, * out_fp;

using namespace std;

void doTask();

Product* selectedProduct;

int main()
{
    // 파일 입출력을 위한 초기화
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
    // 테스트용
    Product test0("test0");
    Product test1("test1");
    Product test2("hat");
    Product test3("test3");
    Product test4("test4");

    productList.push_back(&test0);
    productList.push_back(&test1);
    productList.push_back(&test2);
    productList.push_back(&test3);
    productList.push_back(&test4);

    // 나중에 회원 클래스 쪽으로?
    PurchaseHistory purchaseHistory;

    while (!is_program_exit)
    {
        int temp = fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 4:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                // 4.1 상품 정보 검색
                printf("4.1 상품 정보 검색\n");
                //SearchProduct searchProduct(in_fp, out_fp, productList);
                SearchProduct searchProduct;
                selectedProduct = searchProduct.startInterface(in_fp, out_fp, productList);
                break;
            }
            case 2:
            {
                // 4.2. 상품 구매
                printf("4.2. 상품 구매\n");
                PurchaseProduct purchaseProduct;
                purchaseProduct.startInterface(out_fp , &purchaseHistory, selectedProduct);
                break;
            }
            case 3:
            {
                //4.3. 상품 구매 내역 조회
                printf("4.3. 상품 구매 내역 조회\n");
                PurchaseHistoryInquiry* purchaseHistoryInquiry = new PurchaseHistoryInquiry(); // 동적으로..
                purchaseHistoryInquiry->startInterface(in_fp, out_fp, &purchaseHistory); 
                // 컨트롤 -> 바운더리(여기서 걍 출력 끝..)
                break;
            }
            case 4:
            {
                // 4.4. 상품 구매만족도 평가
                printf("4.4. 상품 구매만족도 평가\n");
                PurchaseSatisfactionEvaluation* purchaseSatisfactionEvaluation = new PurchaseSatisfactionEvaluation();
                purchaseSatisfactionEvaluation->startInterface(in_fp, out_fp, &purchaseHistory);
            }
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. 종료“ 메뉴 부분
            {
                //program_exit();
                printf("6.1 종료\n");
                is_program_exit = 1;
                break;
            }
            }
            break;
        }

        return;
        }

    }
}

