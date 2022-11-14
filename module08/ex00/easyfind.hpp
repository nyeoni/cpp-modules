/*
 * File: whatever.hpp
 * Project: ex00
 * Created Date: 2022/11/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <iostream>
#include <algorithm>
#include <iterator>

template<typename T>
typename T::iterator easyfind(T &container, int num) {
  typename T::iterator iterator;

  iterator = std::find(container.begin(), container.end(), num);
  if (iterator == container.end())
    throw std::logic_error("elements doesn't match anything");
  return (iterator);
}

#endif //EASYFIND_HPP_
