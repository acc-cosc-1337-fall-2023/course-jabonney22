//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cin; using std::cout;


void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game){

    games.push_back(std::move(game));
    update_winner_count(game->get_winner());
}  

 void TicTacToeManager::get_winner_total(int& o, int& w, int&t){

    w = x_win;
    o = o_win;
    t = ties;


 }

 std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager){

    for(auto&game : manager.games){

        out<<*game<<"\n";

    }

    return out;
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

