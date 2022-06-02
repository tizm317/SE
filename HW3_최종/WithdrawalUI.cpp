#include <iostream>
#include "WithdrawalUI.h"
#include "Withdrawal.h"
using namespace std;

WithdrawalUI::WithdrawalUI(FILE* in_fp, FILE* out_fp)
{
    //ÆÄÀÏÀÐ¾î
    //char ID[MAX_STRING], password[MAX_STRING];
    //fscanf(in_fp, "%s %s", ID, password);
    fprintf(out_fp, "1.2. È¸¿øÅ»Åð\n");
    fprintf(out_fp, "\n");
    //fprintf(out_fp, "> %s %s\n", ID, password);
    //cout << ID << password << endl;
}