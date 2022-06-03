//#pragma once
#include <iostream>
//#include "Join.h"
#include <string>
#include <iostream>
#include "UserDB.h"

using namespace std;

#define MAX_STRING 32

class Join;

/*
클래스 이름: JoinUI
기능(설명): Boundary class / 회원가입 기능 입출력 담당
*/
class JoinUI {
public:
    JoinUI();
    JoinUI(FILE* in_fp, FILE* out_fp, UserDB* userList);
};