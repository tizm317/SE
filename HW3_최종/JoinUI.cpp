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
    //�����о�
    char name[MAX_STRING], SSN[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];
    fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);
    //���Ͽ� �ٷ� �� �� ����
    fprintf(out_fp, "1.1. ȸ������\n");
    fprintf(out_fp, "> %s %s %s %s\n", name, SSN, ID, password);
    fprintf(out_fp, "\n");
    //�ٽ� controlclass�� �� �Լ� ȣ����
    Join* control = new Join();
    control->sendEntity(name, SSN, ID, password, userList);
    //cout << name << SSN << ID << password << endl;
}

void JoinUI::ReadFile()
{
    //�ٽ� controlŬ������ �Լ�ȣ��
       //ControlClass_Join* controller = new ControlClass_Join();
       //controller->sendEntity();
       //���� �����
}

void JoinUI::WriteFile()
{
    //cout << "ȸ�����Ծ���Ϸ�" << endl;
      //writeFile << "1.1. ȸ������" << endl;
      //writeFile << "> " << userName << " " << userRRN << " " << userID << " " << userPW << endl;
      //writeFile << userName << " " << userRRN << " " << userID << " " << userPW << endl;
}