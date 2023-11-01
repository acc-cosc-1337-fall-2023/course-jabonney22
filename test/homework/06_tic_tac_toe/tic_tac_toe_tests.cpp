#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include<vector>
#include<string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full"){

	TicTacToe game;

	game.start_game("X");

    for (int i = 1; i <= 9; i++) {
        game.mark_board(i);
    }
	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test first player function to X"){

	TicTacToe game;
	
	game.start_game("X");
	REQUIRE(game.get_player() == "X");

}

TEST_CASE("Test first player function to O"){

	TicTacToe game;
	
	game.start_game("O");
	REQUIRE(game.get_player() == "O");

}


TEST_CASE("Test winner is C during a tie"){

	TicTacToe game;
	
	game.start_game("X");
	for (int i = 1; i <= 9; i++) {
        game.mark_board(i);
    }
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test first column X win"){

	TicTacToe game;
	
	game.start_game("X");
    game.mark_board(1);
    game.mark_board(4);
    game.mark_board(7);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test second column X win"){

	TicTacToe game;
	
	game.start_game("X");
    game.mark_board(2);
    game.mark_board(5);
    game.mark_board(8);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test third column X win"){

	TicTacToe game;
	
	game.start_game("X");
    game.mark_board(3);
    game.mark_board(6);
    game.mark_board(9);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test first column O win"){

	TicTacToe game;
	
	game.start_game("O");
    game.mark_board(1);
    game.mark_board(4);
    game.mark_board(7);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test second column O win"){

	TicTacToe game;
	
	game.start_game("O");
    game.mark_board(2);
    game.mark_board(5);
    game.mark_board(8);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test third column O win"){

	TicTacToe game;
	
	game.start_game("O");
    game.mark_board(3);
    game.mark_board(6);
    game.mark_board(9);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test first row X win"){

	TicTacToe game;
	
	game.start_game("X");
    game.mark_board(1);
    game.mark_board(2);
    game.mark_board(3);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test second row X win"){

	TicTacToe game;
	
	game.start_game("X");
    game.mark_board(4);
    game.mark_board(5);
    game.mark_board(6);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test third row X win"){

	TicTacToe game;
	
	game.start_game("X");
    game.mark_board(7);
    game.mark_board(8);
    game.mark_board(9);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test first row 0 win"){

	TicTacToe game;
	
	game.start_game("O");
    game.mark_board(1);
    game.mark_board(2);
    game.mark_board(3);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test second row 0 win"){

	TicTacToe game;
	
	game.start_game("O");
   	game.mark_board(4);
    game.mark_board(5);
    game.mark_board(6);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test third row 0 win"){

	TicTacToe game;
	
	game.start_game("O");
   	game.mark_board(7);
    game.mark_board(8);
    game.mark_board(9);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test diagonal bottom left X win"){

	TicTacToe game;
	
	game.start_game("X");
    game.mark_board(1);
    game.mark_board(5);
    game.mark_board(9);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test diagonal bottom left O win"){

	TicTacToe game;
	
	game.start_game("O");
    game.mark_board(1);
    game.mark_board(5);
    game.mark_board(9);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test diagonal bottom right X win"){

	TicTacToe game;
	
	game.start_game("X");
    game.mark_board(7);
    game.mark_board(5);
    game.mark_board(3);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test diagonal bottom right O win"){

	TicTacToe game;
	
	game.start_game("O");
    game.mark_board(7);
    game.mark_board(5);
    game.mark_board(3);

	REQUIRE(game.game_over() == true);

}




