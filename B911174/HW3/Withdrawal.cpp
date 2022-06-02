#include <iostream>
#include "Withdrawal.h"
#include "WithdrawalUI.h"
using namespace std;

Withdrawal::Withdrawal(FILE* in_fp, FILE* out_fp)
{
	//여기서 boundary class를 만들어 -> 생성자 호출돼
	WithdrawalUI boundaryClass_Withdrawal = WithdrawalUI(in_fp, out_fp);
}