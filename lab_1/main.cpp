#include "word_count.h"

int main (int argc, char *argv[]) {
	wordCount wc;
	wc.read(argv[1]);
	wc.write(argv[2]);
	return 0;
}
