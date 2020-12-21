//
// Created by Владимир Диев on 21.12.2020.
//

#include "WorkflowParser.h"

using namespace std;

void WorkflowParser::ReadAndRun(string f_name) {
    vector<string> vec_in;
    int f_size = 0;

    string bar;
    f_in.open(f_name);
    if (f_in.is_open())
        while (bar != "csed") {
            getline(f_in, bar);
            vec_in.push_back(bar);
            f_size++;
        }
    f_in.close();

    vec_in.resize(f_size);
    for (int i = 1; i < f_size; i++) {
        if (vec_in[i] == "readfile")
            Worker::buf = ReadFile::func(vec_in[i + 1]);
    }

    int j = 1;

    while (vec_in[j] != "csed") {
        if (vec_in[j] == "replace") {
            Worker::buf = Replace::func(vec_in[j + 1], vec_in[j + 2]);
            j += 2;
        } else if (vec_in[j] == "grep") {
            Worker::buf = Grep::func(vec_in[j + 1]);
            j++;
        } else if (vec_in[j] == "sort") {
            Sort::func(Worker::buf);
        }
    }
    WriteFile::func(Worker::buf);
}
