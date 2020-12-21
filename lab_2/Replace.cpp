//
// Created by Владимир Диев on 22.12.2020.
//

#include "Replace.h"

using namespace std;

void Replace::func(vector<string> &str) {
    throw logic_error("Wrong function in Replace!");
}

vector<string> Replace::func(string &str) {
    throw logic_error("Wrong function in Replace!");
}

vector<string> Replace::func(string &str_1, string &str_2) {
    for (auto &word: buf) {
        word.replace(word.find(str_1), 2, str_2);
    }

    return buf;
}