#include <iostream>
#include "UserDB.h"

using namespace std;

UserDB::UserDB()
{

}
void UserDB::CreateNewAccount(string name, string SSN, string ID, string PW)
{
    //읽어온걸 각 변수에 저장
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

void UserDB::addUserList(UserDB* userDB)
{
    userList.push_back(userDB);
}

vector<UserDB*> UserDB::listUsers()
{
    return this->userList;
}

string UserDB::getUserID()
{
    return userID;
}
