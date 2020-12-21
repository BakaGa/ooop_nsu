//
// Created by Владимир Диев on 22.12.2020.
//

#include "WorkflowParser.h"

int main(int argc, char *argv[]) {
    if (argc != 1) return 1;

    WorkflowParser::ReadAndRun(argv[0]);
    return 0;
}