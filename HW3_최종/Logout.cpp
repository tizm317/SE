#include <iostream>
#include "Logout.h"
#include "LogoutUI.h"
using namespace std;

Logout::Logout(FILE* in_fp, FILE* out_fp)
{
	//���⼭ boundary class�� ����� -> ������ ȣ���
	LogoutUI boundaryClass_Logout = LogoutUI(in_fp, out_fp);
}