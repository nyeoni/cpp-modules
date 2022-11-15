/*
 * File: main.cpp
 * Project: ex00
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

int main(void) {
  Span sp = Span(5);

  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  std::cout << "==================================" << std::endl;

  std::srand(std::time(NULL));
  std::vector<int> tmp(10000);
  std::generate(tmp.begin(), tmp.end(), std::rand);

  Span sp2 = Span(10000);
  std::vector<int>::iterator it = sp2.getElements().begin();
  sp2.addRange(it, tmp.begin(), tmp.end());
  std::cout << sp2.shortestSpan() << std::endl;
  std::cout << sp2.longestSpan() << std::endl;

  return 0;
}
