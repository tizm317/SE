#pragma warning(disable : 4996)
#include <iostream>
#include "JoinUI.h"
#include "Join.h"
using namespace std;

//#define _CRT_SECURE_NO_WARNINGS


JoinUI::JoinUI()
{
}

JoinUI::JoinUI(FILE* in_fp, FILE* out_fp, UserDB* userList)
{
    //파일읽어
    char name[MAX_STRING], SSN[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];
    fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);
    //파일에 바로 쓸 수 있음
    fprintf(out_fp, "1.1. 회원가입\n");
    fprintf(out_fp, "> %s %s %s %s\n", name, SSN, ID, password);
    fprintf(out_fp, "\n");
    //다시 controlclass의 한 함수 호출해
    Join* control = new Join();
    control->sendEntity(name, SSN, ID, password, userList);
    //cout << name << SSN << ID << password << endl;
}

void JoinUI::ReadFile()
{
    //다시 control클래스의 함수호출
       //ControlClass_Join* controller = new ControlClass_Join();
       //controller->sendEntity();
       //파일 입출력
}

void JoinUI::WriteFile()
{
    //cout << "회원가입쓰기완료" << endl;
      //writeFile << "1.1. 회원가입" << endl;
      //writeFile << "> " << userName << " " << userRRN << " " << userID << " " << userPW << endl;
      //writeFile << userName << " " << userRRN << " " << userID << " " << userPW << endl;
}