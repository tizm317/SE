#include <iostream>
#include "Withdrawal.h"
#include "WithdrawalUI.h"
using namespace std;

Withdrawal::Withdrawal(FILE* in_fp, FILE* out_fp)
{
	WithdrawalUI boundaryClass_Withdrawal = WithdrawalUI(in_fp, out_fp);
}