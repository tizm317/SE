#pragma once
#include <iostream>
using namespace std;

class WithdrawalUI;

/*
클래스 이름: Withdrawal
기능(설명): 사이트 회원탈퇴 기능을 수행한다.
*/
class Withdrawal
{
public:
    Withdrawal(FILE* in_fp, FILE* out_fp);
};