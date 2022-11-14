/*
 * File: main.cpp
 * Project: ex00
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data *ptr) { return reinterpret_cast<uintptr_t>(ptr); }
Data *deserialize(uintptr_t raw) { return reinterpret_cast<Data *>(raw); }

int main(void) {
  Data data("data");

  uintptr_t bytes = serialize(&data);
  Data *object = deserialize(bytes);

  std::cout << "bytes: " << bytes << std::endl;
  std::cout << "data: " << data.GetData() << std::endl;
  std::cout << "object: " << object->GetData() << std::endl;

  return 0;
}