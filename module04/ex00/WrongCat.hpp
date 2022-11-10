/*
 * File: WrongCat.hpp
 * Project: ex00
 * Created Date: 2022/11/10
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat(void);
  WrongCat(const WrongCat &copy);
  ~WrongCat();

  WrongCat &operator=(const WrongCat &src);

  void makeSound(void) const;
};

#endif //WRONGCAT_HPP
