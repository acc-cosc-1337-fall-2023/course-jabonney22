#include "tic_tac_toe.h"
#include <iostream>
#include<string>

using std::cout; using std::cin; using std::string;


int main(){
	TicTacToe game;
	string first_player;
	char user_choice;

	do{
		cout<<"Enter first player(X/O): ";
		cin>>first_player;

		game.start_game(first_player);

		int position;

		while(!game.game_over()){
			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
			
		}
            std::string winner = game.get_winner();

        if (winner == "X" || winner == "O") {
            cout << "Player " << winner << " wins!" <<"\n";
        } else {
            cout << "It's a tie!" <<"\n";
        }

		
		cout<<"Play again, enter y or Y? ";
		cin>>user_choice;

	}while(user_choice == 'y' || user_choice == 'Y');

	return 0;
}





