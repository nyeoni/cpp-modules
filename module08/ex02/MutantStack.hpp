/*
 * File: MutantStack.hpp
 * Project: ex02
 * Created Date: 2022/11/15
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
 public:
  typedef typename std::stack<T>::container_type::iterator iterator;
  typedef typename std::stack<T>::container_type::const_iterator const_iterator;

  MutantStack();
  MutantStack(const MutantStack<T> &copy);
  ~MutantStack();

  MutantStack<T> &operator=(const MutantStack<T> &src);

  iterator begin();
  iterator end();
  const_iterator begin() const;
  const_iterator end() const;
};

template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) {
  *this = copy;
}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &src) {
  this->c = src.c;
  return (*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
  return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
  return this->c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
  return this->c.begin();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
  return this->c.end();
}

#endif //MUTANTSTACK_HPP_
