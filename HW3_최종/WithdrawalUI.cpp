#include <iostream>
#include "WithdrawalUI.h"
#include "Withdrawal.h"
using namespace std;

WithdrawalUI::WithdrawalUI(FILE* in_fp, FILE* out_fp)
{
    //�����о�
    //char ID[MAX_STRING], password[MAX_STRING];
    //fscanf(in_fp, "%s %s", ID, password);
    fprintf(out_fp, "1.2. ȸ��Ż��\n");
    fprintf(out_fp, "\n");
    //fprintf(out_fp, "> %s %s\n", ID, password);
    //cout << ID << password << endl;
}