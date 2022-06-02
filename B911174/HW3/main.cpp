#define _CRT_SECURE_NO_WARNINGS
// ��� ����
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include "Join.h"
#include "JoinUI.h"
#include "UserDB.h"
#include "Login.h"
#include "LoginUI.h"
using namespace std;

// ��� ����
#define MAX_STRING 32

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"


// �Լ� ����
void doTask();


// ���� ����
FILE *in_fp, *out_fp;
//string loginID= " ";



class WithdrawalUI {
public:
    WithdrawalUI(FILE * in_fp) //������
    {
        //�����о�
        //char ID[MAX_STRING], password[MAX_STRING];
        //fscanf(in_fp, "%s %s", ID, password);
        fprintf(out_fp, "1.2. ȸ��Ż��\n");
        //fprintf(out_fp, "> %s %s\n", ID, password);
        //cout << ID << password << endl;
    }
};
class Withdrawal {
public:
    Withdrawal(FILE* in_fp) //������
    {
        //���⼭ boundary class�� ����� -> ������ ȣ���
        WithdrawalUI boundaryClass_Withdrawal = WithdrawalUI(in_fp);
    }
};

class LogoutUI {
public:
    LogoutUI(FILE * in_fp) //������
    {
        //�����о�
        //char ID[MAX_STRING], password[MAX_STRING];
        //fscanf(in_fp, "%s %s", ID, password);
        fprintf(out_fp, "2.2. �α׾ƿ�\n");
        //fprintf(out_fp, "> %s \n", loginID);
        //fprintf(out_fp, "> %s %s\n", loginID, password);
        //cout << ID << password << endl;
    }
};
class Logout {
public:
    Logout(FILE* in_fp) //������
    {
        //���⼭ boundary class�� ����� -> ������ ȣ���
        LogoutUI boundaryClass_Logout = LogoutUI(in_fp);
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////main�Լ�
int main(void)
{
    //// ���� ������� ���� �ʱ�ȭ
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}

void doTask()
{
    // ���� �޴�(6 1)�� �ԷµǱ� ������ �ݺ���
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0;
    int menu_level_2 = 0;

    //vector<UserDB*> userList;

    while (true)
    {
        //�Է����Ͽ��� �޴� ���� 2�� �б�
        fscanf_s(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // �޴� ���� �� �ش� ���� ����
        if (menu_level_1 == 1)
        {
            if (menu_level_2 == 1)
            {
                //fprintf(out_fp, "1.1. ȸ������\n");
                //control class�� �������� -> ������ ȣ���
                Join controlClass_Join = Join(in_fp, out_fp);
                //join();
            }
            else if (menu_level_2 == 2)
            {
                //fprintf(out_fp, "1.2. ȸ��Ż��\n");
                //control class�� �������� -> ������ ȣ���
                Withdrawal controlClass_Withdrawal = Withdrawal(in_fp);
                //withdrawal();
            }
        }
        else if (menu_level_1 == 2)
        {
            if (menu_level_2 == 1)
            {
                //fprintf(out_fp, "2.1. �α���\n");
                //control class�� �������� -> ������ ȣ���
                Login controlClass_Login = Login(in_fp, out_fp);
                //login();
            }
            else if (menu_level_2 == 2)
            {
                //fprintf(out_fp, "2.2. �α׾ƿ�\n");
                //control class�� �������� -> ������ ȣ���
                Logout controlClass_Logout = Logout(in_fp);
                //logout();
            }
        }
        else if (menu_level_1 == 3)
        {
            if (menu_level_2 == 1)
            {
                // �Ǹ� �Ƿ� ���
            }
            else if (menu_level_2 == 2)
            {
                // ��� ��ǰ ��ȸ
            }
            else if (menu_level_2 == 3)
            {
                // �Ǹ� �Ϸ� ��ǰ ��ȸ
            }
        }
        else if (menu_level_1 == 4)
        {
            if (menu_level_2 == 1)
            {
                // ��ǰ ���� �˻�
            }
            else if (menu_level_2 == 2)
            {
                // ��ǰ ����
            }
            else if (menu_level_2 == 3)
            {
                // ��ǰ ���� ���� ��ȸ
            }
            else if (menu_level_2 == 4)
            {
                // ��ǰ ���Ÿ����� ��
            }
        }
        else if (menu_level_1 == 5)
        {
            if (menu_level_2 == 1)
            {
                // �Ǹ� ��ǰ ���
            }
        }
        else if (menu_level_1 == 6)
        {
            if (menu_level_2 == 1)
            {
                //program_exit();
                fprintf(out_fp, "6.1. ����\n");
                break;
            }
        }
        else
        {
            cout << "�߸��� �Է�" << endl;
            break;
        }
    }
}