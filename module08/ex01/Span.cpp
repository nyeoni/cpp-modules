/*
 * File: Span.cpp
 * Project: ex01
 * Created Date: 2022/11/15
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Span.hpp"

Span::Span() : N_(0) {}
Span::Span(unsigned int n) : N_(n) {}
Span::Span(const Span &copy) : N_(copy.N_), elements_(copy.elements_) {}
Span::~Span() {}

Span &Span::operator=(const Span &src) {
  this->N_ = src.N_;
  this->elements_ = src.elements_;
  return (*this);
}

void Span::addNumber(const unsigned int num) {
  if (elements_.size() >= N_) throw OverFlowError();
  elements_.push_back(num);
}
void Span::addRange(std::vector<int>::iterator pos, std::vector<int>::iterator begin, std::vector<int>::iterator end) {
  if ((elements_.size() + end - begin) > N_) throw OverFlowError();
  elements_.insert(pos, begin, end);
}
int Span::shortestSpan() {
  if (elements_.size() <= 1)
    throw SpanNotFound();
  std::vector<int> tmp(elements_);
  std::sort(tmp.begin(), tmp.end());
  unsigned int min = UINT_MAX;
  for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end() - 1; it++) {
    unsigned int range = *(it + 1) - *(it);
    if (range < min) min = range;
  }
  return min;
}
int Span::longestSpan() {
  if (elements_.size() <= 1)
    throw SpanNotFound();
  return *std::max_element(elements_.begin(), elements_.end()) - *std::min_element(elements_.begin(), elements_.end());
}
unsigned int Span::getN() const {
  return N_;
}
std::vector<int> &Span::getElements() {
  return elements_;
}

const char *Span::OverFlowError::what() const throw() {
  return "Span size overflow";
}
const char *Span::SpanNotFound::what() const throw() {
  return "Span not found";
}
