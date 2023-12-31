#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include<string>

using std::cout; using std::cin; using std::string;
using std::unique_ptr; using std::make_unique;


int main(){
	TicTacToeManager manager;
	unique_ptr<TicTacToe> game;
	string first_player;
	char user_choice;

	do{
		auto game_type = 0;

		cout<<"Enter game type(Enter 3 or 4): ";
		cin>>game_type;

		if(game_type == 3){

			game = make_unique<TicTacToe3>();

		}
		else{

			game = make_unique<TicTacToe4>();

		}

		cout<<"Enter first player(X/O): ";
		cin>>first_player;

		game->start_game(first_player);

		int position;

		while(!game->game_over()){
			cout<<"Enter a position: ";
			cin>>position;
			game->mark_board(position);
			game->display_board();
			
		}
            std::string winner = game->get_winner();
			manager.save_game(game);

        if (winner == "X" || winner == "O") {
            cout << "Player " << winner << " wins!" <<"\n";
        } else {
            cout << "It's a tie!" <<"\n";
        }

		int o,x,t;

		manager.get_winner_total(x, o, t);
		cout << "X wins: " <<x<<"\n";
		cout << "O wins: " <<o<<"\n";
		cout << "Ties: " <<t<<"\n";

		
		cout<<"Play again, enter y or Y? ";
		cin>>user_choice;

	}while(user_choice == 'y' || user_choice == 'Y');

	return 0;
}





