/*
 * File: main.cpp
 * Project: ex00
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main(void) {
  std::cout << "================ vector test =================" << std::endl;

  std::vector<int> v;
  for (int i = 0; i < 3; i++) {
    v.push_back(i + 10);
  }
  for (int i = 0; i < 3; i++) {
    v.push_back(i + 10);
  }
  std::cout << "vec list" << std::endl;
  for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    std::cout << *it << std::endl;
  }

  try {
    std::cout << *easyfind(v, 11) << std::endl;
    std::cout << *easyfind(v, 111) << std::endl;
  } catch (std::exception &e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  std::cout << "================ list test =================" << std::endl;

  std::list<int> l;
  for (int i = 0; i < 3; i++) {
    l.push_back(i + 10);
  }
  for (int i = 0; i < 3; i++) {
    l.push_back(i + 10);
  }
  for (std::list<int>::iterator it = l.begin(); it != l.end(); it++) {
    std::cout << *it << std::endl;
  }

  try {
    std::cout << *easyfind(l, 11) << std::endl;
    std::cout << *easyfind(l, 13) << std::endl;
  } catch (std::exception &e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  std::cout << "length of l" << std::endl;
  std::list<int>::iterator t = std::find(l.begin(), l.end(), 13);
  std::cout << *t << std::endl;

  return (0);
}
