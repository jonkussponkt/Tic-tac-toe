//
// Created by Admin on 22.11.2020.
//

#include "Board.h"

void Board::print_board() {
    cout << "__________\n";
    for(auto & i : board) {
        cout << "|";
        for (char & j : i)
            cout << j << " |";
        cout << endl;
    }
    cout << "__________\n";
}

void Board::play_a_game() {
    char move;
    int x,y;
    a.put_a_name();
    b.put_a_name();
    a.symbol = 'x';
    b.symbol = 'o';
    while(true){
        print_board();
        cout << "PLAYER X MOVES\nPut the coordinates in:";
        cin >> y >> x;
        while(x < 0 || x > 3 || y < 0 || y > 3 || board[y][x] != ' ' || board[y][x] != ' ') {
            cout << "WRONG MOVE!\nPut the coordinates in again:";
            cin >> y >> x;
        }
        board[y][x] = a.symbol;

        if(is_full()){
            cout << "Tie!\n";
            print_board();
            break;
        }
        if(is_won()) {
            cout << a.name << " is a winner\n";
            print_board();
            break;
        }

        print_board();
        cout << "PLAYER Y MOVES\nPut the coordinates in:";
        cin >> y >> x;
        while(x < 0 || x > 3 || y < 0 || y > 3 || board[y][x] != ' ' || board[y][x] != ' ') {
            cout << "WRONG MOVE!\nPut the coordinates in again:";
            cin >> y >> x;
        }
        board[y][x] = b.symbol;

        if(is_won()){
            cout << b.name << " is a winner\n";
            print_board();
            break;
        }
    }
}

bool Board::is_won(){
    for(int i = 0; i < 3; i++){//board[0][0]
        if(board[i][0] != ' ' && board[i][1] == board[i][0] && board[i][2] == board[i][0])
            return true;
        else if(board[0][i] != ' ' && board[1][i] == board[0][i] && board[2][i] == board[0][i])
            return true;
        else if(board[0][0] != ' ' && board[1][1] == board[0][0] && board[2][2] == board[0][0])
            return true;
    }
    return false;
}

bool Board::is_full() {
    for(auto & i : board){
        for(char & j : i){
            if(j == ' ')
                return false;
        }
    }
    return true;
}
