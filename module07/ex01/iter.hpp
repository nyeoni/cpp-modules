/*
 * File: iter.hpp
 * Project: ex01
 * Created Date: 2022/11/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef ITER_HPP_
#define ITER_HPP_

template<typename T>
void iter(T *addr, int length, void (*fp)(const T &)) {
  for (int i = 0; i < length; i++) {
    fp(addr[i]);
  }
}

#endif //ITER_HPP_
