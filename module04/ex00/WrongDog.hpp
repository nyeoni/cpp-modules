/*
 * File: WrongDog.hpp
 * Project: ex00
 * Created Date: 2022/11/10
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
 public:
  WrongDog(void);
  WrongDog(const WrongDog &copy);
  ~WrongDog();

  WrongDog &operator=(const WrongDog &src);

  void makeSound(void) const;
};

#endif //WRONGDOG_HPP
