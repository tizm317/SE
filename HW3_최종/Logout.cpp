#include <iostream>
#include "Logout.h"
#include "LogoutUI.h"
using namespace std;

Logout::Logout(FILE* in_fp, FILE* out_fp)
{
	//여기서 boundary class를 만들어 -> 생성자 호출돼
	LogoutUI boundaryClass_Logout = LogoutUI(in_fp, out_fp);
}