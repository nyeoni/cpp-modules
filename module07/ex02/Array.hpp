/*
 * File: Array.hpp
 * Project: ex02
 * Created Date: 2022/11/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <iostream>
#include <cstdlib>

template<typename T>
class Array {
 private:
  T *elements_;
  unsigned int n_;
 public:
  Array();
  Array(const unsigned int n);
  Array(const Array<T> &copy);
  ~Array();

  Array &operator=(const Array<T> &src);
  T &operator[](unsigned int i);

  unsigned int size() const;

  class IndexOutOfBound : public std::exception {
   public:
    const char *what() const throw() {
      return "Index out of Bound.";
    }
  };
};

template<typename T>
Array<T>::Array() : elements_(NULL), n_(0) {}

template<typename T>
Array<T>::Array(const unsigned int n) : n_(n) {
  elements_ = new T[n_];
  memset(elements_, 0, n_ * sizeof(T));
}

template<typename T>
Array<T>::Array(const Array<T> &copy) : elements_(NULL) {
  this->n_ = copy.n_;
  this->elements_ = new T[n_];
  memset(elements_, 0, n_ * sizeof(T));
}

template<typename T>
Array<T>::~Array() {
  if (this->elements_)
    delete[] this->elements_;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &src) {
  if (this->elements_) {
    delete[] this->elements_;
    this->elements_ = NULL;
  }
  this->n_ = src.n_;
  this->elements_ = new T[n_];
  memset(elements_, 0, n_ * sizeof(T));

  return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int i) {
  if (i < 0 || i >= n_)
    throw IndexOutOfBound();
  return elements_[i];
}

template<typename T>
unsigned int Array<T>::size() const {
  unsigned int i = 0;

  while (elements_[i])
    i++;
  return i;
}

#endif //ARRAY_HPP_
