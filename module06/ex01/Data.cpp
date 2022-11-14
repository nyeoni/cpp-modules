/*
 * File: Data.cpp
 * Project: ex01
 * Created Date: 2022/11/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Data.hpp"

Data::Data() {}
Data::Data(const std::string &data) : data_(data) {}
Data::Data(const Data &copy) : data_(copy.data_) {}
Data::~Data() {}

Data &Data::operator=(const Data &src) {
  this->data_ = src.data_;
  return (*this);
}

const std::string &Data::GetData() const {
  return data_;
}
void Data::SetData(const std::string &data) {
  data_ = data;
}
