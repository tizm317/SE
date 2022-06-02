//#pragma once
#include <iostream>
//#include "Join.h"
#include <string>
#include <iostream>
#include "UserDB.h"

using namespace std;

#define MAX_STRING 32

class Join;

class JoinUI {
private:

public:
    JoinUI();
    JoinUI(FILE* in_fp, FILE* out_fp, UserDB* userList); //생성자
    void ReadFile(); //파일읽어들여
    void WriteFile(); //파일에 써
};