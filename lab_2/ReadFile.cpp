//
// Created by Владимир Диев on 22.12.2020.
//

#include "ReadFile.h"

using namespace std;

void ReadFile::func(vector<string> &str) {
    throw logic_error("Wrong function in ReadFile!");
}

vector<string> ReadFile::func(string &str) {
    string line;
    in.open(str);
    if (in.is_open())
        while (getline(in, line))
            buf.push_back(line);
    else {
        throw logic_error("Can't open file: " + str);
    }
    in.close();

    for (auto &tmp:buf)
        for (string::iterator i = tmp.begin(); i != tmp.end(); ++i)
            if (ispunct(*i))
                *i = ' ';

    return buf;
}

vector<string> ReadFile::func(string &str_1, string &str_2) {
    throw logic_error("Wrong function in ReadFile!");
}