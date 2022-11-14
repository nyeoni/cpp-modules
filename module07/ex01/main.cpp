/*
 * File: main.cpp
 * Project: ex00
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include <string>
#include "iter.hpp"

template<typename T>
void print(const T &t) {
  std::cout << t << std::endl;
}

int main(void) {
  int arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  char arr2[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};

  iter(arr1, 10, print);
  iter(arr2, 7, print);

  return 0;
}
