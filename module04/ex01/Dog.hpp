/*
 * File: Dog.hpp
 * Project: ex00
 * Created Date: 2022/11/10
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 private:
  Brain *brain_;
 public:
  Dog(void);
  Dog(const Dog &copy);
  virtual ~Dog();

  Dog &operator=(const Dog &src);

  Brain *getBrain() const;

  virtual void makeSound(void) const;
};

#endif //DOG_HPP
