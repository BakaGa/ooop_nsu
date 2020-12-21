//
// Created by Владимир Диев on 21.12.2020.
//

#ifndef OOOP_SORT_H
#define OOOP_SORT_H

#include "Worker.h"


using namespace std;

class Sort : public Worker {
public:
    static vector<string> func(string &str);

    static vector<string> func(string &str_1, string &str_2);

    static void func(vector<string> &str);
};

#endif //OOOP_SORT_H
