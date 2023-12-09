#include <iostream>
#include <fmt/core.h>

int main() {
  fmt::print("Hello, world!\n");

  std::string s = fmt::format("The answer is {}.", 42);
  std::cout << s << std::endl;
}