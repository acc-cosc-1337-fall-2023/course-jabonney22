//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cin; using std::cout;


void TicTacToeManager::save_game(TicTacToe b){

    games.push_back(b);
    update_winner_count(b.get_winner());
}  

 void TicTacToeManager::get_winner_total(int& o, int& w, int&t){

    w = x_win;
    o = o_win;
    t = ties;


 }

 //private

 void TicTacToeManager::update_winner_count(std::string winner){

if(winner == "X"){

    x_win += 1;
}

else if(winner == "O"){

    o_win += 1;
}

else{

    ties += 1;
}

}

