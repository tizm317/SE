#pragma warning(disable : 4996)
#include <iostream>
#include "LogoutUI.h"
#include "Logout.h"
using namespace std;

#define _CRT_SECURE_NO_WARNINGS

LogoutUI::LogoutUI(FILE* in_fp, FILE* out_fp)
{
    //파일읽어
    char ID[MAX_STRING], password[MAX_STRING];
    //string str1(ID);
    //loginID = ID;
    //fscanf(in_fp, "%s %s", ID, password);
    //파일에 바로 쓸 수 있음
    fprintf(out_fp, "2.2. 로그아웃\n");
    //fprintf(out_fp, "> %s %s\n", ID, password);
    //cout << ID << password << endl;
}