#pragma once
#include <iostream>
using namespace std;

#define MAX_STRING 32

class Logout;

/*
클래스 이름: LogoutUI
기능(설명): Boundary class / 로그아웃 기능 입출력 담당
*/
class LogoutUI {
public:
    LogoutUI(FILE* in_fp, FILE* out_fp);
};