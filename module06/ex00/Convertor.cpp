/*
 * File: Convertor.cpp
 * Project: ex00
 * Created Date: 2022/11/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Convertor.hpp"

// Constructor & Destructor
Convertor::Convertor() : value_(0) {}
Convertor::Convertor(const std::string &value) : value_(value) {}
Convertor::Convertor(const Convertor &copy) : value_(copy.value_) {}
Convertor::~Convertor() {}

// Operator Overload
Convertor &Convertor::operator=(const Convertor &src) {
  this->value_ = src.value_;
  return (*this);
}

// Method
bool Convertor::isNan(double num) const {
  if (num != num)
    return true;
  return false;
}
bool Convertor::isInf(double num) const {
  if (num == (1.0 / 0.0) || num == (-1.0 / 0.0))
    return true;
  return false;
}
void Convertor::convertChar() const {
  int num;

  std::cout << "char: ";

  if (value_.length() == 1) {
    num = static_cast<int>(value_[0]);
  } else {
    num = static_cast<int>(strtod(value_.c_str(), NULL));
  }

  if ((num > 32 && num < 48) || (num > 57 && num < 127)) {
    std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
  } else if ((num >= 0x00) && (num <= 0xff)) {
    std::cout << "Non displayable" << std::endl;
  } else {
    std::cout << "impossible" << std::endl;
  }
}
void Convertor::convertInt() const {
  int num = std::atoi(value_.c_str());

  std::cout << "int: ";
  if (num == 0 && value_[0] != '0') {
    std::cout << "impossible" << std::endl;
  } else {
    std::cout << num << std::endl;
  }
}
void Convertor::convertFloat() const {
  float num = static_cast<float>(std::atof(value_.c_str()));

  std::cout << "float: ";
  if (num == 0 && value_[0] != '0') {
    std::cout << "impossible" << std::endl;
  } else if (isNan(num) || isInf(num) || (std::round(num) != num)) {
    std::cout << num << "f" << std::endl;
  } else {
    std::cout << num << ".0f" << std::endl;
  }
}
void Convertor::convertDouble() const {
  double num = std::atof(value_.c_str());

  std::cout << "double: ";
  if (num == 0 && value_[0] != '0') {
    std::cout << "impossible" << std::endl;
  } else if (isNan(num) || isInf(num) || (std::round(num) != num)) {
    std::cout << num << std::endl;
  } else {
    std::cout << num << ".0" << std::endl;
  }
}
void Convertor::convert() const {
  convertChar();
  convertInt();
  convertFloat();
  convertDouble();
}

// Getter & Setter
const std::string &Convertor::GetValue() const {
  return value_;
}
void Convertor::SetValue(const std::string &value) {
  value_ = value;
}


