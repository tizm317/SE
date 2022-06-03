#pragma once
#include <iostream>
using namespace std;

class LogoutUI;

/*
클래스 이름: Logout
기능(설명): 사이트 로그아웃 기능을 담당한다
*/
class Logout
{
public:
    Logout(FILE* in_fp, FILE* out_fp);
};