//
// Created by Владимир Диев on 22.12.2020.
//

#ifndef OOOP_READFILE_H
#define OOOP_READFILE_H

#include "Worker.h"

using namespace std;

class ReadFile : public Worker {
public:
    static vector<string> func(string &str);

    static vector<string> func(string &str_1, string &str_2);

    static void func(vector<string> &str);
};

#endif //OOOP_READFILE_H
