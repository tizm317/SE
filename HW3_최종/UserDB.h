#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class UserDB {
private:
    string userName;
    int userSSN;
    string userID;
    string userPW;
    //
    vector<UserDB*> userList;
public:
    UserDB();
    void CreateNewAccount(string name, string SSN, string ID, string PW);
    void DeleteUserInfo();
    void SendIDandPW();
    void CheckIDandPW();
    //
    void addUserList(UserDB*);
    vector<UserDB*> listUsers();
    string getUserID();
};