/*
 * File: Animal.hpp
 * Project: ex00
 * Created Date: 2022/11/08
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
 protected:
  std::string type_;
 public:
  Animal(void);
  Animal(const Animal &copy);
  virtual ~Animal();

  Animal &operator=(const Animal &src);

  virtual void makeSound(void) const;
  const std::string &getType() const;
};

#endif //ANIMAL_HPP
