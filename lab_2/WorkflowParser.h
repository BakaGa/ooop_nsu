//
// Created by Владимир Диев on 21.12.2020.
//

#ifndef OOOP_WORKFLOWPARSER_H
#define OOOP_WORKFLOWPARSER_H

#include <istream>

#include "Worker.h"
#include "Grep.h"
#include "ReadFile.h"
#include "Replace.h"
#include "Sort.h"
#include "WriteFile.h"

class WorkflowParser {
public:
    static ifstream f_in;

    static void ReadAndRun(string f_name);
};

#endif //OOOP_WORKFLOWPARSER_H
