#include <iostream>
#include "Login.h"
#include "LoginUI.h"
using namespace std;

Login::Login(FILE* in_fp, FILE* out_fp)
{
	//���⼭ boundary class�� ����� -> ������ ȣ���
	LoginUI boundaryClass_Login = LoginUI(in_fp, out_fp);
	//boundaryClass_Login.getID();
}
