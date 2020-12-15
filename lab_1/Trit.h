//
// Created by Владимир Диев on 16.12.2020.
//
#pragma once

#include <iostream>

using namespace std;

enum class trit : short {
    False = 0,
    Unknown = 1,
    True = 3
};

trit operator!(trit a);

trit operator|(trit a, trit b);

trit operator&(trit a, trit b);

ostream &operator<<(ostream &out, trit a);
