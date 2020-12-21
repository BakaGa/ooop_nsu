//
// Created by Владимир Диев on 22.12.2020.
//

#include "Grep.h"

using namespace std;

void Grep::func(vector<string> &str) {
    throw logic_error("Wrong function in Grep!");
}

vector<string> Grep::func(string &str) {
    int i = 0;
    for (auto &line: buf) {
        if (line.find(str) == -1)
            buf.erase(buf.begin() + i);
        i++;
    }
    return buf;
};

vector<string> Grep::func(string &str_1, string &str_2) {
    throw logic_error("Wrong function in Grep!");
}