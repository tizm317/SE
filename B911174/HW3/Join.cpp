#include <iostream>
#include "Join.h"
#include "JoinUI.h"
using namespace std;

//class JoinUI;

Join::Join()
{
	//control->sendEntity(name, SSN, ID, password);
	//cout << "join되었습니다" << endl;
}

Join::Join(FILE* in_fp, FILE* out_fp)
{
	//여기서 boundary class를 만들어 -> 생성자 호출돼
	JoinUI boundaryClass_Join = JoinUI(in_fp, out_fp);
	//boundary한테 읽어달라고 해
	//boundaryClass_Join->ReadFile();
}

void Join::sendEntity(string name, string SSN, string ID, string PW)
{
	UserDB* userDB = new UserDB();
	userDB->CreateNewAccount(name, SSN, ID, PW);
}
