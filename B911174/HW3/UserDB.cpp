#include <iostream>
#include "UserDB.h"

using namespace std;

UserDB::UserDB()
{

}
void UserDB::CreateNewAccount(string name, string SSN, string ID, string PW)
{
    //�о�°� �� ������ ����
    this->userName = name;
    this->userSSN = stoi(SSN);
    this->userID = ID;
    this->userPW = PW;
    cout << userName << " " << userSSN << " "  << userID << " " << userPW << endl;
}

void UserDB::DeleteUserInfo()
{

}

void UserDB::SendIDandPW()
{

}

void UserDB::CheckIDandPW()
{

}