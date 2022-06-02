#pragma once
//#include "JoinUI.h"
#include "UserDB.h"
#include <string>
#include <iostream>


class JoinUI;
class UserDB;

class Join {
public:
    Join();
    Join(FILE* in_fp, FILE* out_fp);
    void sendEntity(string name, string SSN, string ID, string PW); //Entity¿¡ Àü´Þ
};