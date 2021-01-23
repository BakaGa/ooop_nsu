//
// Created by Владимир Диев on 23.01.2021.
//

#ifndef LAB3_FIELD_H
#define LAB3_FIELD_H

using namespace std;

class Field {
private:
    bool draw; //"True" если ничья
public:
    Field(bool b = false) {
        draw = b;
    } //констуктор
    void null_field(char[3][3]); //обнуление поля
    void update_field(char[3][3], int, int, bool); //обновления поля|установка X или O
    void out_field(char[3][3]); //вывод поля
    bool check_win(char[3][3], bool); //проверка победителя
    bool check_draw(char[3][3]); //проверка ничьей
    bool get_draw(); //Получение значения для ничьей
    void set_draw(bool); //Установка значения для ничьей
    ~Field();
};

#endif //LAB3_FIELD_H
