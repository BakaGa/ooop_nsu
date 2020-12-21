//
// Created by Владимир Диев on 21.12.2020.
//

#ifndef OOOP_WORKER_H
#define OOOP_WORKER_H

#include <vector>
#include <fstream>
#include <sstream>
#include <cctype>
#include <string>
#include <stdexcept>
#include <algorithm>

using namespace std;

class Worker {
public:
    static ifstream in;
    static ofstream out;
    static string out_name;
    static vector<string> buf;
};


#endif //OOOP_WORKER_H