#define CATCH_CONFIG_MAIN // catch provides the main function

#include <catch2/catch.hpp>

TEST_CASE("Catch is setup correctly")
{
    CHECK(1 + 1 == 2);
}