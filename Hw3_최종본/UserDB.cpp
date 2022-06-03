#include <iostream>
#include "UserDB.h"

using namespace std;

UserDB::UserDB()
{

}
void UserDB::createNewAccount(string name, string ssn, string id, string pw)
{
    this->userName = name;
    this->userSsn = stoi(ssn);
    this->userId = id;
    this->userPw = pw;
}

void UserDB::deleteUserInfo()
{

}

void UserDB::sendIDandPW()
{

}

void UserDB::checkIDandPW()
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
    return userId;
}
