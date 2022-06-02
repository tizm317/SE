#pragma warning(disable : 4996)
#include <iostream>
#include "LoginUI.h"
#include "Login.h"
using namespace std;

#define _CRT_SECURE_NO_WARNINGS

LoginUI::LoginUI(FILE* in_fp, FILE* out_fp)
{
    //파일읽어
    char ID[MAX_STRING], password[MAX_STRING];
    //string str1(ID);
    //loginID = ID;
    fscanf(in_fp, "%s %s", ID, password);
    //파일에 바로 쓸 수 있음
    fprintf(out_fp, "2.1. 로그인\n");
    fprintf(out_fp, "> %s %s\n", ID, password);
    //cout << ID << password << endl;
}