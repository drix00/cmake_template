#include <fmt/core.h>

#include <catch2/catch_test_macros.hpp>

#include <internal_use_only/config.hpp>


TEST_CASE("fmt") {
  fmt::print("{}\n", myproject::cmake::project_version);
}
