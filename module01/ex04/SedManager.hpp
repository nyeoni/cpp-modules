/*
 * File: SedManager.hpp
 * Project: cpp_modules
 * Created Date: 2022/08/30
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef SEDMANAGER_HPP
#define SEDMANAGER_HPP

#include <string>
#include <fstream>

class SedManager {
 private:
  std::ifstream infile_;
  std::ofstream outfile_;
  std::string buf_;
 public:
  SedManager();
  ~SedManager();
  int init_io(std::string infile, std::string outfile);
  int replace(std::string pattern, std::string replacement);
};

#endif //SEDMANAGER_HPP
