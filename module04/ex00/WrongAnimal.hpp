/*
 * File: WrongAnimal.hpp
 * Project: ex00
 * Created Date: 2022/11/10
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
 protected:
  std::string type_;
 public:
  WrongAnimal(void);
  WrongAnimal(const WrongAnimal &copy);
  ~WrongAnimal();

  WrongAnimal &operator=(const WrongAnimal &src);

  void makeSound(void) const;
  const std::string &getType() const;
};

#endif //WRONGANIMAL_HPP
