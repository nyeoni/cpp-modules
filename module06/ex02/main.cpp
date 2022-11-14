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

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
  int randomIndex;

  srand(time(NULL));
  randomIndex = rand() % 3 + 1; // 1 ~ 3
  switch (randomIndex) {
    case 1:return new A();
    case 2:return new B();
    case 3:return new C();
  }
  return (NULL);
}

void identify(Base *p) {
  if (dynamic_cast<A *>(p)) {
    std::cout << "A" << std::endl;
    return;
  } else if (dynamic_cast<B *>(p)) {
    std::cout << "B" << std::endl;
    return;
  } else if (dynamic_cast<C *>(p)) {
    std::cout << "C" << std::endl;
    return;
  } else {
    std::cout << "Error: Something is Wrong..." << std::endl;
  }
}

void identify(Base &p) {
  try {
    (void) dynamic_cast<A &>(p);
    std::cout << "A" << std::endl;
    return;
  } catch (std::exception &e) {}
  try {
    (void) dynamic_cast<B &>(p);
    std::cout << "B" << std::endl;
    return;
  } catch (std::exception &e) {}
  try {
    (void) dynamic_cast<C &>(p);
    std::cout << "C" << std::endl;
    return;
  } catch (std::exception &e) {
    std::cout << "Error: Something is Wrong..." << std::endl;
  }
}

int main(void) {
  Base *base = generate();

  identify(base);
  identify(*base);

  delete base;

  return 0;
}