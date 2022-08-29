/*
 * File: main.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/24
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "PhoneBook.hpp"

int main() {
  PhoneBook phoneBook;
  std::string command;

  std::cin.exceptions(std::ios::eofbit | std::ios::failbit | std::ios::badbit);
  try {
    while (true) {
      std::cout << "\033[1;36mSELECT COMMAND ADD | SEARCH | EXIT : \033[0m";
      std::getline(std::cin, command);

      if (command == "ADD")
        phoneBook.addContact();
      else if (command == "SEARCH")
        phoneBook.searchContact();
      else if (command == "EXIT")
        break;
      else
        std::cout << "Error: Wrong Command." << std::endl;
    }
  } catch (std::exception &e) {
    if (!std::cin.eof()) std::cout << "Error: " << e.what() << std::endl;
  }
  return 0;
}