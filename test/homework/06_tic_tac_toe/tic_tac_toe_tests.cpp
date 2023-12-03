#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

using std::unique_ptr;
using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full "){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test first player function to X"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
    
    game->start_game("X");
    REQUIRE(game->get_player() == "X");

}

TEST_CASE("Test first player function to O"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
    
    game->start_game("O");
    REQUIRE(game->get_player() == "O");

}

TEST_CASE("Test winner is C during a tie"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
    
    game->start_game("X");
    for (int i = 1; i <= 9; i++) {
        game->mark_board(i);
    }
    REQUIRE(game->game_over() == true);

}

TEST_CASE("Test first column X win"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
    
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");

}

TEST_CASE("Test first column O win"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
    
	game->start_game("O");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");

}

TEST_CASE("Test second column X win"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
    
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");

}

TEST_CASE("Test second column O win"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
    
	game->start_game("O");
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");

}


TEST_CASE("Test third column X win") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Test third column O win") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
}

TEST_CASE("Test X first row win") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Test O first row win") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
}

TEST_CASE("Test X second row win") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Test O second row win") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
}

TEST_CASE("Test X third row win") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Test O third row win") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
}


TEST_CASE("Testing win diagonally from top left") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win diagonally from bottom left") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Test if the board is full(4)"){

	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test first player function to X(4)"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
    
    game->start_game("X");
    REQUIRE(game->get_player() == "X");

}

TEST_CASE("Test first player function to O(4)"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
    
    game->start_game("O");
    REQUIRE(game->get_player() == "O");

}

TEST_CASE("Test winner is C during a tie(4)"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
    
    game->start_game("X");
    for (int i = 1; i <= 16; i++) {
        game->mark_board(i);
    }
    REQUIRE(game->game_over() == true);

}

TEST_CASE("Test first column X win(4)"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
    
	game->start_game("X");
	game->mark_board(0);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");

}

TEST_CASE("Test first column O win(4)"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
    
	game->start_game("O");
	game->mark_board(0);
	REQUIRE(game->game_over()==false);
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");

}

TEST_CASE("Test second column X win(4)"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
    
	game->start_game("X");
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");

}

TEST_CASE("Test second column O win(4)"){

    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
    
	game->start_game("O");
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");

}


TEST_CASE("Test third column X win(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(14);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Test third column O win(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(14);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
}

TEST_CASE("Test fourth column X win(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Test fourth column O win(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
}

TEST_CASE("Test X first row win(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(0);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Test O first row win(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(0);
	REQUIRE(game->game_over()==false);
	game->mark_board(1);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
}

TEST_CASE("Test X second row win(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Test O second row win(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(4);
	REQUIRE(game->game_over()==false);
	game->mark_board(7);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(6);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
}

TEST_CASE("Test X third row win(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Test O third row win(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(11);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(2);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
}

TEST_CASE("Test X fourth row win(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Test O fourth row win(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(13);
	REQUIRE(game->game_over()==false);
	game->mark_board(8);
	REQUIRE(game->game_over()==false);
	game->mark_board(14);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="O");
}


TEST_CASE("Testing win diagonally from top left(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(0);
	REQUIRE(game->game_over()==false);
	game->mark_board(10);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==false);
	game->mark_board(15);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

TEST_CASE("Testing win diagonally from bottom left(4)") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(6);
	REQUIRE(game->game_over()==false);
	game->mark_board(9);
	REQUIRE(game->game_over()==false);
	game->mark_board(5);
	REQUIRE(game->game_over()==false);
	game->mark_board(12);
	REQUIRE(game->game_over()==false);
	game->mark_board(3);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner()=="X");
}

