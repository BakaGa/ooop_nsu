//
// Created by Владимир Диев on 23.01.2021.
//
#include <iostream>

#include "Field.h"

using namespace std;

//обнуление поля
void Field::null_field(char field[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            field[i][j] = '-';
}

//обновления поля|установка X или O
void Field::update_field(char field[3][3], int row, int col, bool player_order) {
    cout << endl;
    if (player_order)
        field[row][col] = 'X';
    else
        field[row][col] = 'O';
}

//вывод поля
void Field::out_field(char field[3][3]) {
    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << field[i][j];
        cout << endl;
    }
}

//проверка победителя
bool Field::check_win(char field[3][3], bool player_order) {
    if (player_order) {
        if (field[0][0] == 'X' && field[0][1] == 'X' && field[0][2] == 'X')
            return true;
        if (field[1][0] == 'X' && field[1][1] == 'X' && field[1][2] == 'X')
            return true;
        if (field[2][0] == 'X' && field[2][1] == 'X' && field[2][2] == 'X')
            return true;

        if (field[0][0] == 'X' && field[1][0] == 'X' && field[2][0] == 'X')
            return true;
        if (field[0][1] == 'X' && field[1][1] == 'X' && field[2][1] == 'X')
            return true;
        if (field[0][2] == 'X' && field[1][2] == 'X' && field[2][2] == 'X')
            return true;

        if (field[0][0] == 'X' && field[1][1] == 'X' && field[2][2] == 'X')
            return true;
        if (field[0][2] == 'X' && field[1][1] == 'X' && field[2][0] == 'X')
            return true;
        else
            return false;
    }

    if (!player_order) {
        if (field[0][0] == 'O' && field[0][1] == 'O' && field[0][2] == 'O')
            return true;
        if (field[1][0] == 'O' && field[1][1] == 'O' && field[1][2] == 'O')
            return true;
        if (field[2][0] == 'O' && field[2][1] == 'O' && field[2][2] == 'O')
            return true;

        if (field[0][0] == 'O' && field[1][0] == 'O' && field[2][0] == 'O')
            return true;
        if (field[0][1] == 'O' && field[1][1] == 'O' && field[2][1] == 'O')
            return true;
        if (field[0][2] == 'O' && field[1][2] == 'O' && field[2][2] == 'O')
            return true;

        if (field[0][0] == 'O' && field[1][1] == 'O' && field[2][2] == 'O')
            return true;
        if (field[0][2] == 'O' && field[1][1] == 'O' && field[2][0] == 'O')
            return true;
        else
            return false;
    }
    return false;
}

//проверка ничьей
bool Field::check_draw(char field[3][3]) {
    if (field[0][0] != '-' && field[0][1] != '-' && field[0][2] != '-' &&
        field[1][0] != '-' && field[1][1] != '-' && field[1][2] != '-' &&
        field[2][0] != '-' && field[2][1] != '-' && field[2][2] != '-')
        return true;
    else
        return false;
}

//Получение значения для ничьей
bool Field::get_draw() {
    return draw;
}

//Установка значения для ничьей
void Field::set_draw(bool b) {
    draw = b;
}

Field::~Field() {}
