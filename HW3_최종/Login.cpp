#include <iostream>
#include "Login.h"
#include "LoginUI.h"
using namespace std;

Login::Login(FILE* in_fp, FILE* out_fp)
{
	//여기서 boundary class를 만들어 -> 생성자 호출돼
	LoginUI boundaryClass_Login = LoginUI(in_fp, out_fp);
	//boundaryClass_Login.getID();
}
