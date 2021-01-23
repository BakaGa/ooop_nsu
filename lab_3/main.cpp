//
// Created by Владимир Диев on 23.01.2021.
//
#include <cstdlib>
#include <iostream>

#include "Field.h"
#include "Player.h"

using namespace std;

int main() {
    int row, col;
    char field[3][3];
    bool player_order;
    int mode;

    Player first_player;
    Player second_player;
    Field game_field;

    do {
        cout << "Выберите режим игры: '1' - 1vs2; '2' - 1vsAI" << endl;
        cin >> mode;
        if (mode != 1 && mode != 2)
            cout << "Неверный ввод!!!" << endl << endl;
    } while (mode != 1 && mode != 2);

    player_order = first_player.game_order();

    srand(time(0));
    game_field.null_field(field);

    do {
        game_field.out_field(field);
        if (player_order)
            first_player.person_move(field, row, col);
        else
            mode == 1 ? second_player.person_move(field, row, col) : second_player.ai_move(field, row, col);

        game_field.update_field(field, row, col, player_order);

        if (game_field.check_win(field, player_order))
            break;

        if (game_field.check_draw(field)) {
            game_field.set_draw(true);
            break;
        }

        player_order = !player_order;
    } while (true);

    game_field.out_field(field);

    if (game_field.get_draw())
        cout << "Ничья!\n";

    else if (player_order)
        cout << "Игрок 1 выиграл!\n";

    else
        mode == 1 ? cout << "Игрок 2 выиграл!\n" : cout << "Победа ИИ!\n";

    return 0;
}