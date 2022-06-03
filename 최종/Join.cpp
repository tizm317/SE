#include <iostream>
#include "Join.h"
#include "JoinUI.h"
using namespace std;

Join::Join()
{
}

Join::Join(FILE* in_fp, FILE* out_fp, UserDB* userList)
{
	JoinUI boundaryClass_Join = JoinUI(in_fp, out_fp, userList);
}

void Join::sendEntity(string name, string SSN, string ID, string PW, UserDB* userList)
{
	UserDB* userDB = new UserDB();
	userDB->createNewAccount(name, SSN, ID, PW);

	userList->addUserList(userDB);
}