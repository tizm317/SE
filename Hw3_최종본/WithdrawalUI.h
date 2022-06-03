#pragma once
#include <iostream>
using namespace std;

class Withdrawal;

/*
클래스 이름: WithdrawalUI
기능(설명): Boundary class / 회원탈퇴 기능 입출력 담당으로 ID을 출력한다.
*/
class WithdrawalUI
{
public:
    WithdrawalUI(FILE* in_fp, FILE* out_fp);
};