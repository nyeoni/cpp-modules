/*
 * File: Data.hpp
 * Project: ex01
 * Created Date: 2022/11/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef DATA_HPP_
#define DATA_HPP_

#include <string>

class Data {
 private:
  std::string data_;
 public:
  Data();
  Data(const std::string &data);
  Data(const Data &copy);
  ~Data();

  Data &operator=(const Data &src);

  const std::string &GetData() const;
  void SetData(const std::string &data);
};

#endif //DATA_HPP_
