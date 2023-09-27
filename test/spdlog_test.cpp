#include <spdlog/spdlog.h>

#include <catch2/catch_test_macros.hpp>


TEST_CASE("spdlog") {
  spdlog::error("Unhandled exception in main: ");
}
