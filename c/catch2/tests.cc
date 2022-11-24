#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include "solution.h"

// see
// https://github.com/catchorg/Catch2/blob/v2.x/docs/assertions.md#top
TEST_CASE("a first test passes", "[tag]") {
    REQUIRE(7 * 8 != 42);
}
