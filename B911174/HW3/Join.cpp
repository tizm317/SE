#include <iostream>
#include "Join.h"
#include "JoinUI.h"
using namespace std;

//class JoinUI;

Join::Join()
{
	//control->sendEntity(name, SSN, ID, password);
	//cout << "join�Ǿ����ϴ�" << endl;
}

Join::Join(FILE* in_fp, FILE* out_fp)
{
	//���⼭ boundary class�� ����� -> ������ ȣ���
	JoinUI boundaryClass_Join = JoinUI(in_fp, out_fp);
	//boundary���� �о�޶�� ��
	//boundaryClass_Join->ReadFile();
}

void Join::sendEntity(string name, string SSN, string ID, string PW)
{
	UserDB* userDB = new UserDB();
	userDB->CreateNewAccount(name, SSN, ID, PW);
}
