//#pragma once
#include <iostream>
//#include "Join.h"
#include <string>
#include <iostream>

using namespace std;

#define MAX_STRING 32

class Join;

class JoinUI {
private:

public:
    JoinUI(FILE* in_fp, FILE* out_fp); //������
    void ReadFile(); //�����о�鿩
    void WriteFile(); //���Ͽ� ��
};