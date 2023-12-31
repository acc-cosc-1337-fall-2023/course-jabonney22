#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test refrence and pointer parameters") {
	
	int num1 = 5, num2 = 10;

	ref_pointer(num1, &num2);

	REQUIRE(num1 == 20);
	REQUIRE(num2 == 30);
}
