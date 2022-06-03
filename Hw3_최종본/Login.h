#pragma once
#include <iostream>
#include "UserDB.h"
using namespace std;

class LoginUI;

/*
클래스 이름: Login
기능(설명): 사이트 로그인 기능을 담당한다
*/
class Login {
public:
    Login(FILE* in_fp, FILE* out_fp);
};