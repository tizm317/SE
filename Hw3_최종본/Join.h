#pragma once
//#include "JoinUI.h"
#include "UserDB.h"
#include <string>
#include <iostream>

class JoinUI;
class UserDB;

/*
클래스 이름: Join
기능(설명): 사이트 회원가입 기능을 담당한다
*/
class Join {
public:
    Join();
    Join(FILE* in_fp, FILE* out_fp, UserDB* userList);
    void sendEntity(string name, string SSN, string ID, string PW, UserDB*);
};