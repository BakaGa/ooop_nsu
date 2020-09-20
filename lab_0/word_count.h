#pragma once

#include <map>
#include <string>

using namespace std;

class wordCount {
private:
	map <string, int> rowMap;
	int counter;
public:
	wordCount() {
		counter = 0;
	}

	void read (const string &input);
	void write (const string &output) const;
};
