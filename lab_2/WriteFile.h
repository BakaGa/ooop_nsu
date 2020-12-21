//
// Created by Владимир Диев on 22.12.2020.
//

#ifndef OOOP_WRITEFILE_H
#define OOOP_WRITEFILE_H

#include "Worker.h"
#include <algorithm>

using namespace std;

class WriteFile : public Worker {
public:
    static vector<string> func(string &str);

    static vector<string> func(string &str_1, string &str_2);

    static void func(vector<string> &str);
};

#endif //OOOP_WRITEFILE_H
