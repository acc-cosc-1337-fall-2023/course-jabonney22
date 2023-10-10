#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

using std :: string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_gc content function") {
	REQUIRE(get_gc_content("AGCTATAG") == 37.5);
	REQUIRE(get_gc_content("CGCTATAG") == 50.0);
	
}

TEST_CASE("Verify get_dna complement function"){
	REQUIRE(get_dna_complement("AAAACCCGGT") == "TTTTGGGCCA");
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "GGGCCTTTTA");
}

