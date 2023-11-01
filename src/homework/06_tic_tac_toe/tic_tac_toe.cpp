//cpp
#include "tic_tac_toe.h"
#include<iostream>
#include<vector>
#include<string>

using std::cout; 


bool TicTacToe::game_over(){
    
    if (check_column_win() == true || check_row_win() ==  true || check_diagonal_win() == true) {
            return true;
    } 
    
    else if (check_board_full() == true && check_column_win() == false && check_row_win() ==  false && check_diagonal_win() == false) {
            winner = "C";
            return true;
    }

    else{

        if(get_winner() != "X" || get_winner() != "O" || get_winner() != "C" || !check_board_full()){

        return false;

        }
    }
}

void TicTacToe::start_game(std::string first_player){

    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position){

    pegs[position-1] = player;
    set_next_player();

}

void TicTacToe::display_board() const{

    for( long unsigned int i = 0; i < pegs.size(); i += 3 ){

    cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";

    }
}


//private functions

std::string winner;

void TicTacToe::clear_board(){

    for(auto& peg: pegs){

        peg = " ";

    }
}

void TicTacToe::set_next_player(){

    if(player == "X"){

        player = "O";
    }
    else{

        player = "X";
    }
}

bool TicTacToe::check_board_full(){

    for( const std::string& peg : pegs){

        if(peg == " "){
            return false;
        }
    }

    return true;
}

bool TicTacToe::check_column_win(){

    for(int i = 0 ; i < 3; i++ ){
        if(pegs[i] == winner && pegs[i+3] == winner && pegs[i+6] == winner){

            set_winner();
        }
    }

    return true;
}

bool TicTacToe::check_diagonal_win(){

    for(int i = 0 ; i < 3; i++ ){

         if ((pegs[0] == winner && pegs[4] == winner && pegs[8] == winner) ||
            (pegs[2] == winner && pegs[4] == winner && pegs[6] == winner)){

            set_winner();

        }
    }

    return true;
}

bool TicTacToe::check_row_win(){

    for(int i = 0 ; i < 9; i+=3 ){
        if(pegs[i] == winner && pegs[i+3] == winner && pegs[i+6] == winner){

        set_winner();

        }
    }

    return true;
}

void TicTacToe::set_winner(){
    
    if(winner == "X"){

        winner == "O";
    }
    else{

        winner == "X";
    }
}





