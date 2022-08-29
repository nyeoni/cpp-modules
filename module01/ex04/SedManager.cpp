/*
 * File: SedManager.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/30
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "SedManager.hpp"

#define SUCCESS 0
#define FAIL -1

SedManager::SedManager() {}
SedManager::~SedManager() {}

int SedManager::init_io(std::string infile, std::string outfile) {
  infile_.open(infile);
  outfile_.open(outfile, std::ofstream::out);
  if (!infile_.is_open() || !outfile_.is_open()) {
    std::cout << "Error: " << "Invalid file." << std::endl;
    return (FAIL);
  }
  buf_.clear();
  return (SUCCESS);
}
int SedManager::replace(std::string pattern, std::string replacement) {
  std::string::size_type pos = -1;

  while (std::getline(infile_, buf_)) {
    pos = buf_.find(pattern, pos + 1);
    while (pos != std::string::npos) {
      buf_.erase(pos, pattern.length());
      buf_.insert(pos, replacement);
      pos = buf_.find(pattern, pos + 1);
    }
    outfile_ << buf_ << std::endl;
  }
  if (infile_.bad()) {
    std::cout << "Error: " << "Failed while processing." << std::endl;
    return (FAIL);
  }
  return (SUCCESS);
}
