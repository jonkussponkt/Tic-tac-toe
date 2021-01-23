//
// Created by Admin on 22.11.2020.
//

#ifndef KOLKO_I_KRZYZYK_PLAYER_H
#define KOLKO_I_KRZYZYK_PLAYER_H

#include <iostream>
#include <utility>

using namespace std;

class Player{
    string name;
    char symbol;
    friend class Board;
public:
    void put_a_name();
    Player(string n = " ", char s = ' ') : name(move(n)), symbol(s){};
};

#endif //KOLKO_I_KRZYZYK_PLAYER_H
