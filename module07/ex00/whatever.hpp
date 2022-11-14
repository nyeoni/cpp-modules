/*
 * File: whatever.hpp
 * Project: ex00
 * Created Date: 2022/11/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef WHATEVER_HPP_
#define WHATEVER_HPP_

# include <iostream>

template<typename T>
void swap(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template<typename T>
T min(T a, T b) {
  if (a >= b)
    return (b);
  else
    return (a);
}

template<typename T>
T max(T a, T b) {
  if (a > b)
    return (a);
  else
    return (b);
}

#endif //WHATEVER_HPP_
