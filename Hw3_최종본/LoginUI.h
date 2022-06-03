#pragma once
#include <iostream>
using namespace std;

#define MAX_STRING 32

class Login;

/*
클래스 이름: LoginUI
기능(설명): Boundary class / 로그인 기능 입출력 담당
*/
class LoginUI {
private:
    char ID[MAX_STRING];
    char password[MAX_STRING];
public:
    LoginUI(FILE* in_fp, FILE* out_fp);
};