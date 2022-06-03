#pragma warning(disable : 4996)
#include <iostream>
#include "LoginUI.h"
#include "Login.h"
using namespace std;

#define _CRT_SECURE_NO_WARNINGS

LoginUI::LoginUI(FILE* in_fp, FILE* out_fp)
{
    fscanf(in_fp, "%s %s", ID, password);

    fprintf(out_fp, "2.1. 로그인\n");
    fprintf(out_fp, "> %s %s\n", ID, password);
    fprintf(out_fp, "\n");
}