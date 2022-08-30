/*
 * File: main.cpp
 * Project: cpp-modules
 * Created Date: 2022/08/30
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Harl.hpp"

int main(void) {
  Harl harl;

  harl.complain("DEBUG");
  harl.complain("INFO");
  harl.complain("INFO");
  harl.complain("WARNING");
  harl.complain("WARNING");
  harl.complain("WARNING");
  harl.complain("ERROR");
  harl.complain("ERROR");
  harl.complain("ERROR");
  harl.complain("ERROR");
  harl.complain("ERROR");

  return (0);
}