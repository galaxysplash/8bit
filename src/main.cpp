// main.cpp

#include "PacMan.h"

#include <print>

auto main(const int argc, const char *const *const argv) -> int {
  auto pac_man = PacMan{100};

  pac_man.take_damage(10);

  std::println("pac_man's health: {}", pac_man.get_health());
}
