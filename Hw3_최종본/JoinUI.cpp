#pragma warning(disable : 4996)
#include <iostream>
#include "JoinUI.h"
#include "Join.h"
using namespace std;

JoinUI::JoinUI()
{
}

JoinUI::JoinUI(FILE* in_fp, FILE* out_fp, UserDB* userList)
{
    char name[MAX_STRING], SSN[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

    fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);
    fprintf(out_fp, "1.1. 회원가입\n");
    fprintf(out_fp, "> %s %s %s %s\n", name, SSN, ID, password);
    fprintf(out_fp, "\n");

    Join* control = new Join();
    control->sendEntity(name, SSN, ID, password, userList);
}