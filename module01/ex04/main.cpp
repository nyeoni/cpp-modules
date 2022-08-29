/*
 * File: main.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/29
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "SedManager.hpp"

int main(int argc, char **argv) {
  SedManager sed_manager;
  std::string filename;

  if (argc != 4) {
    std::cout << "Error: Wrong Arguments (you need 3 arguments)." << std::endl;
    return (1);
  }
  filename = argv[1];
  sed_manager.init_io(filename, filename + ".replace");
  sed_manager.replace(argv[2], argv[3]);

  return (0);
}