//
// Created by Admin on 22.11.2020.
//

#ifndef KOLKO_I_KRZYZYK_BOARD_H
#define KOLKO_I_KRZYZYK_BOARD_H

#include <iostream>
#include "Player.h"

using namespace std;

class Board{
    char board [3][3];
    Player a;
    Player b;
public:
    void print_board();
    void play_a_game();
    bool is_won();
    bool is_full();
    Board(string n = " ", char s = ' ') : a(n, s), b(n, s){
        for(auto & i : board){
            for(char & j : i)
                j = ' ';
        }
    };
};


#endif //KOLKO_I_KRZYZYK_BOARD_H
