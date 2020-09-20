#include "word_count.h"

#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <list>

using namespace std;

void wordCount::read (const string &input) {
    fstream f(input);
    string tmp;
    while (f) {
        string word;
        getline(f, tmp);
        for (char ch : tmp) {
            if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                word.push_back(ch);
            }
            else if (!word.empty()) {
                counter++;
                rowMap[word]++;
                word.clear();
            }
        }
    }
}


void out(const pair <int, string> &item, ofstream &output, int counter) {
    output << item.second << ',' << item.first << ',' << ((double) item.first) / counter * 100 << '%' << endl;
}

void wordCount::write(const string &output) const {

    ofstream f(output);

    list <pair <int, string> > words;
    for (const auto &pair : rowMap) {
        words.emplace_back(pair.second, pair.first);
    }
    words.sort();
    words.reverse();

    for (auto const &word : words) {
        out(word, f, counter);
    }
    f.close();
}
