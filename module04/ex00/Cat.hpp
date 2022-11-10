/*
 * File: Cat.hpp
 * Project: ex00
 * Created Date: 2022/11/10
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat(void);
  Cat(const Cat &copy);
  virtual ~Cat();

  Cat &operator=(const Cat &src);

  virtual void makeSound(void) const;
};

#endif //CAT_HPP
