#pragma warning(disable : 4996)
#include <iostream>
#include "LogoutUI.h"
#include "Logout.h"
using namespace std;

#define _CRT_SECURE_NO_WARNINGS

LogoutUI::LogoutUI(FILE* in_fp, FILE* out_fp)
{
    char ID[MAX_STRING], password[MAX_STRING];

    fprintf(out_fp, "2.2. 로그아웃\n");
    fprintf(out_fp, "\n");
}