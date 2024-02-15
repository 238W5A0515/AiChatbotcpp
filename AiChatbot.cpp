#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::unordered_map<std::string, std::string> responses = {
    {"hi", "Hello! How can I help you today?"},
    {"goodbye", "Bye! See you later."},
    {"how are you", "I'm doing well, thanks for asking!"},
  };

  std::string input;
  while (std::getline(std::cin, input)) {
    auto response = responses.find(input);
    if (response != responses.end()) {
      std::cout << response->second << std::endl;
    } else {
      std::cout << "Sorry, I didn't understand that." << std::endl;
    }
  }

  return 0;
}
