/*
 * File: Harl.hpp
 * Project: cpp-modules
 * Created Date: 2022/08/30
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
 private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
 public:
  Harl();
  ~Harl();
  void complain(std::string level);
};

typedef void (Harl::*HarlFn)(void);

#endif //HARL_HPP
