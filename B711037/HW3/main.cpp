#include <iostream>
#include <vector>
#include "SearchSellProduct.h"
#include "SearchSellProductUI.h"
#include "AddProduct.h"
#include "AddProductUI.h"
#include "Product.h"
#include "SellHistory.h"
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
    SellHistory sellHistory;

    while(!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // 메뉴 구분 및 해당 연산 수행
        switch(menu_level_1)
        {
            // case 1:
            // {
            //     switch(menu_level_2)
            //     {
            //         case 1: // "1.1. 회원가입“ 메뉴 부분
            //         {
            //             break;
            //         }
            //         case 2:
            //         {
            //             break;
            //         }
            //     }
            // }
            // case 2:
            // {
            //     switch(menu_level_2)
            //     {
            //         case 1:
            //         {
            //             break;
            //         }
            //         case 2:
            //         {
            //             break;
            //         }
            //     }
            // }
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
                        return ;
                    }
                    case 3:
                    {
                        break;
                    }
                }
            }
            // case 6:
            // {
            //     switch(menu_level_2)
            //     {
            //         case 1: // "6.1. 종료“ 메뉴 부분
            //         {
            //             program_exit();
            //             is_program_exit = 1;
            //             break;;
            //         }
            //     }
            // }
        }
    }
    return;
}

void join()
{
    char user_type[MAX_STRING], name[MAX_STRING], SSN[MAX_STRING], address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

    // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
    fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);

    // 해당 기능 수행

    // 출력 형식
    fprintf(out_fp, "1.1. 회원가입\n");
    fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}

void program_exit()
{

}