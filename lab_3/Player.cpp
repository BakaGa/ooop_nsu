//
// Created by Владимир Диев on 23.01.2021.
//
#include "iostream"
#include "cstdlib"

#include "Player.h"

using namespace std;

//опеделение порядка хода
bool Player::game_order() {
    char ans;
    do {
        cout << "Игрок 1 ходит первый? Y/N" << endl;
        cin >> ans;
        if (ans == 'y' or ans == 'Y')
            return true;
        if (ans == 'n' or ans == 'N')
            return false;
        else
            cout << "Неверный ввод!!!" << endl << endl;
    } while (ans != 'Y' && ans != 'y' && ans != 'n' && ans != 'N');
    return true;
}

//ход игока
void Player::person_move(char field[3][3], int &row, int &col) {
    bool repeat = true;
    int cell = -1;
    do {
        cout << "Введите номер ячейки, чтобы поставить X/O. [1-9]" << endl;
        cin >> cell;
        cell % 3 == 0 ? row = cell / 3 - 1 : row = cell / 3;
        col = (cell - row * 3) - 1;

        if (field[row][col] != '-') {
            if (cell > 0 && cell < 10)
                cout << "Это место занято!!!" << endl;
            else
                cout << "Неверный ввод!!!" << endl;
        } else
            repeat = false;
    } while (repeat);
}

//генерация хода ИИ
void Player::ai_move(char field[3][3], int &row, int &col) {
    do {
        row = (rand() % 3);
        col = (rand() % 3);
    } while (field[row][col] != '-');
}


//дестуктор
Player::~Player() {}