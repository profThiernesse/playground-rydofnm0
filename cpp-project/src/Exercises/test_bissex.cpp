#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bissex.h"

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( bissex(2000) == 1 );
    REQUIRE( bissex(2004) == 1 );
    REQUIRE( bissex(2003) == 0 );
    REQUIRE( bissex(2100) == 0 );
}
