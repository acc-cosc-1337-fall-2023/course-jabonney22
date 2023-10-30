
#include "tic_tac_toe.h"
#include "tic_tac_toe.cpp"
#include <iostream>
#include<string>

using std::cout; using std::cin; using std::string;


int main() 
{
	TicTacToe game;
	string first_player;
	char user_choice = 'y';

	do{

		cout<<"enter first player: ";
		cin>>first_player;

		game.start_game(first_player);

		int position;

		while(!game.game_over()){

			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();

		}

	game.display_board();
    std::string winner = game.get_winner();
    if (winner == "C") {
        cout << "It's a tie!" <<"\n";
    } else {
        cout << winner << " wins!" <<"\n";
    }


        cout << "Play again? (y/n): ";
        cin >> user_choice;

    return 0;

		
	}while(user_choice == 'y' || user_choice == 'Y');

	return 0;
}



