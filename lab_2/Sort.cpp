//
// Created by Владимир Диев on 21.12.2020.
//

#include "Sort.h"

using namespace std;

void Sort::func(vector<string> &str) {
    sort(str.rbegin(), str.rend());
}

vector<string> Sort::func(string &str) {
    throw logic_error("Wrong function in Sort!");
}

vector<string> Sort::func(string &str_1, string &str_2) {
    throw logic_error("Wrong function in Sort!");
}