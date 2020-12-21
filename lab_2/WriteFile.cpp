//
// Created by Владимир Диев on 22.12.2020.
//

#include "WriteFile.h"

using namespace std;

void WriteFile::func(vector<string> &str) {
    out.open(out_name);
    if (out.is_open())
        for (auto &point: str)
            out << point;
    else
        throw logic_error("Can't open file: " + out_name);
}

vector<string> WriteFile::func(string &str) {
    throw logic_error("Wrong function in WriteFile!");
}

vector<string> WriteFile::func(string &str_1, string &str_2) {
    throw logic_error("Wrong function in WriteFile!");
}