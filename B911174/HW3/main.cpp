#define _CRT_SECURE_NO_WARNINGS
// 헤더 선언
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include "Join.h"
#include "JoinUI.h"
#include "UserDB.h"
#include "Login.h"
#include "LoginUI.h"
using namespace std;

// 상수 선언
#define MAX_STRING 32

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"


// 함수 선언
void doTask();


// 변수 선언
FILE *in_fp, *out_fp;
//string loginID= " ";



class WithdrawalUI {
public:
    WithdrawalUI(FILE * in_fp) //생성자
    {
        //파일읽어
        //char ID[MAX_STRING], password[MAX_STRING];
        //fscanf(in_fp, "%s %s", ID, password);
        fprintf(out_fp, "1.2. 회원탈퇴\n");
        //fprintf(out_fp, "> %s %s\n", ID, password);
        //cout << ID << password << endl;
    }
};
class Withdrawal {
public:
    Withdrawal(FILE* in_fp) //생성자
    {
        //여기서 boundary class를 만들어 -> 생성자 호출돼
        WithdrawalUI boundaryClass_Withdrawal = WithdrawalUI(in_fp);
    }
};

class LogoutUI {
public:
    LogoutUI(FILE * in_fp) //생성자
    {
        //파일읽어
        //char ID[MAX_STRING], password[MAX_STRING];
        //fscanf(in_fp, "%s %s", ID, password);
        fprintf(out_fp, "2.2. 로그아웃\n");
        //fprintf(out_fp, "> %s \n", loginID);
        //fprintf(out_fp, "> %s %s\n", loginID, password);
        //cout << ID << password << endl;
    }
};
class Logout {
public:
    Logout(FILE* in_fp) //생성자
    {
        //여기서 boundary class를 만들어 -> 생성자 호출돼
        LogoutUI boundaryClass_Logout = LogoutUI(in_fp);
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////main함수
int main(void)
{
    //// 파일 입출력을 위한 초기화
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}

void doTask()
{
    // 종료 메뉴(6 1)가 입력되기 전까지 반복함
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0;
    int menu_level_2 = 0;

    //vector<UserDB*> userList;

    while (true)
    {
        //입력파일에서 메뉴 숫자 2개 읽기
        fscanf_s(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // 메뉴 구분 및 해당 연산 수행
        if (menu_level_1 == 1)
        {
            if (menu_level_2 == 1)
            {
                //fprintf(out_fp, "1.1. 회원가입\n");
                //control class를 만들어야함 -> 생성자 호출돼
                Join controlClass_Join = Join(in_fp, out_fp);
                //join();
            }
            else if (menu_level_2 == 2)
            {
                //fprintf(out_fp, "1.2. 회원탈퇴\n");
                //control class를 만들어야함 -> 생성자 호출돼
                Withdrawal controlClass_Withdrawal = Withdrawal(in_fp);
                //withdrawal();
            }
        }
        else if (menu_level_1 == 2)
        {
            if (menu_level_2 == 1)
            {
                //fprintf(out_fp, "2.1. 로그인\n");
                //control class를 만들어야함 -> 생성자 호출돼
                Login controlClass_Login = Login(in_fp, out_fp);
                //login();
            }
            else if (menu_level_2 == 2)
            {
                //fprintf(out_fp, "2.2. 로그아웃\n");
                //control class를 만들어야함 -> 생성자 호출돼
                Logout controlClass_Logout = Logout(in_fp);
                //logout();
            }
        }
        else if (menu_level_1 == 3)
        {
            if (menu_level_2 == 1)
            {
                // 판매 의류 등록
            }
            else if (menu_level_2 == 2)
            {
                // 등록 상품 조회
            }
            else if (menu_level_2 == 3)
            {
                // 판매 완료 상품 조회
            }
        }
        else if (menu_level_1 == 4)
        {
            if (menu_level_2 == 1)
            {
                // 상품 정보 검색
            }
            else if (menu_level_2 == 2)
            {
                // 상품 구매
            }
            else if (menu_level_2 == 3)
            {
                // 상품 구매 내역 조회
            }
            else if (menu_level_2 == 4)
            {
                // 상품 구매만족도 평가
            }
        }
        else if (menu_level_1 == 5)
        {
            if (menu_level_2 == 1)
            {
                // 판매 상품 통계
            }
        }
        else if (menu_level_1 == 6)
        {
            if (menu_level_2 == 1)
            {
                //program_exit();
                fprintf(out_fp, "6.1. 종료\n");
                break;
            }
        }
        else
        {
            cout << "잘못된 입력" << endl;
            break;
        }
    }
}