/*
 * File: Span.hpp
 * Project: ex01
 * Created Date: 2022/11/15
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <vector>

class Span {
 private:
  unsigned int N_;
  std::vector<int> elements_;
 public:
  Span();
  Span(const unsigned int n);
  Span(const Span &copy);
  ~Span();

  Span &operator=(const Span &src);

  void addNumber(const unsigned int num);
  void addRange(std::vector<int>::iterator pos, std::vector<int>::iterator begin, std::vector<int>::iterator end);
  int shortestSpan();
  int longestSpan();

  unsigned int getN() const;
  std::vector<int> &getElements();

  class OverFlowError : public std::exception {
   public:
    virtual const char *what() const throw();
  };
  class SpanNotFound : public std::exception {
   public:
    virtual const char *what() const throw();
  };
};

#endif //SPAN_HPP_
