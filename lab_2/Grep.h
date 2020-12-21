//
// Created by Владимир Диев on 22.12.2020.
//

#ifndef OOOP_GREP_H
#define OOOP_GREP_H

#include "Worker.h"

using namespace std;

class Grep : public Worker {
public:
    static vector<string> func(string &str);

    static vector<string> func(string &str_1, string &str_2);

    static void func(vector<string> &str);
};

#endif //OOOP_GREP_H
