#pragma once
#include <iostream>
#include <string>
using namespace std;

class UserDB {
private:
    string userName;
    int userSSN;
    string userID;
    string userPW;
    
public:
    UserDB();
    void CreateNewAccount(string name, string SSN, string ID, string PW);
    void DeleteUserInfo();
    void SendIDandPW();
    void CheckIDandPW();
};