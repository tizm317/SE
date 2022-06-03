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
public:
    JoinUI();
    JoinUI(FILE* in_fp, FILE* out_fp, UserDB* userList);
};