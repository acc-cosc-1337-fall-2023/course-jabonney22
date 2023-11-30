//h
#include<iostream>
#include<vector>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager{

    public:

    void save_game(TicTacToe b);
    void get_winner_total(int& o, int& w, int&t);

    private:

    std::vector<TicTacToe>games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(std::string winner);



};

#endif