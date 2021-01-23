//
// Created by Владимир Диев on 23.01.2021.
//

#ifndef LAB3_PLAYER_H
#define LAB3_PLAYER_H

using namespace std;

class Player {
private:
public:
    bool game_order(); //определение порядка хода
    void person_move(char[3][3], int &, int &); //ход игрока
    void ai_move(char[3][3], int &, int &); //генерация хода ИИ
    ~Player();
};

#endif //LAB3_PLAYER_H
