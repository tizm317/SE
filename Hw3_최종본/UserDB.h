#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
클래스 이름: UserDB
기능(설명):
*/
class UserDB
{
private:
    string userName;
    int userSsn;
    string userId;
    string userPw;
    vector<UserDB*> userList;
public:
    UserDB();
    void createNewAccount(string name, string ssn, string id, string pw);
    void deleteUserInfo();
    void sendIDandPW();
    void checkIDandPW();
    void addUserList(UserDB*);
    vector<UserDB*> listUsers();
    string getUserID();
};