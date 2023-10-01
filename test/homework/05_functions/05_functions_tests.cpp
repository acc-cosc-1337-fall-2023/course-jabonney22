#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

using std :: string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get gc function") {

	string str = "AGCTATAG";
	get_gc_content(str);

	REQUIRE(str == 37.5);
}
