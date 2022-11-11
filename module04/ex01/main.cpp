/*
 * File: main.cpp
 * Project: ex00
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define L_GREEN "\033[1;32m"
#define L_BLUE "\033[1;94m"
#define RESET "\033[0m"

int main(void) {
  {
    Animal *animals[100];

    std::cout << L_GREEN << "===========Create 100 Animals===========" << RESET << std::endl;
    for (int i = 0; i < 50; i++) animals[i] = new Dog();
    for (int i = 50; i < 100; i++) animals[i] = new Cat();

    std::cout << L_GREEN << "===========makeSound()===========" << RESET << std::endl;
    for (int i = 0; i < 50; i++) animals[i]->makeSound();
    for (int i = 50; i < 100; i++) animals[i]->makeSound();

    std::cout << L_GREEN << "===========Delete 100 Animals===========" << RESET << std::endl;
    for (int i = 0; i < 50; i++) delete animals[i];
    for (int i = 50; i < 100; i++) delete animals[i];

    std::cout << L_GREEN << "===========Check DeepCopy : Copy Constructor===========" << RESET << std::endl;
    Dog src;
    Dog dst(src);

    Dog tmp;
    dst = tmp;

    std::cout << "Address of src brain: " << src.getBrain() << std::endl;
    std::cout << "Address of dst brain: " << dst.getBrain() << std::endl;

    std::cout << "Address of src brain->ideas: " << src.getBrain()->getIdeas() << std::endl;
    std::cout << "Address of dst brain->ideas: " << dst.getBrain()->getIdeas() << std::endl;

    std::cout << L_GREEN << "===========Destructor called===========" << RESET << std::endl;
  }

  std::cout << L_GREEN << "===========Leaks check===========" << RESET << std::endl;
  system("leaks outfile");

  return 0;
}