#pragma once
#include <iostream>
using namespace std;

#define MAX_STRING 32

class Login;

class LoginUI {
private:
    char ID[MAX_STRING];
    char password[MAX_STRING];
public:
    LoginUI(FILE* in_fp, FILE* out_fp); //»ý¼ºÀÚ
};