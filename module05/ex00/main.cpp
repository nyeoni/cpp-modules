/*
 * File: main.cpp
 * Project: ex00
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "Bureaucrat.hpp"

#define L_GREEN "\033[1;32m"
#define L_RED "\033[1;31m"
#define RESET "\033[0m"

int main(void) {
  try {
    std::cout << L_GREEN << "==============Constructor Check==============" << RESET << std::endl;
    Bureaucrat a;
    Bureaucrat b("nkim", 1);
    Bureaucrat c(b);
    Bureaucrat d;
    d = a;

    std::cout << L_GREEN << "==============Check Instance a, b, c, d==============" << RESET << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;

    std::cout << L_GREEN << "==============Check Increment, Decrement Method==============" << RESET << std::endl;
    a.incrementGrade();
    b.decrementGrade();
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;

    std::cout << L_GREEN << "==============Check Getter Method==============" << RESET << std::endl;
    std::cout << a.getName() << " : " << a.getGrade() << std::endl;
    std::cout << b.getName() << " : " << b.getGrade() << std::endl;
    std::cout << c.getName() << " : " << c.getGrade() << std::endl;
    std::cout << d.getName() << " : " << d.getGrade() << std::endl;

    std::cout << L_RED << "==============Exception Check==============" << RESET << std::endl;
    c.incrementGrade(); // GradeTooHighException
    d.decrementGrade(); // GradeTooLowException
    Bureaucrat error1("error1", 0); // GradeTooHighException
    Bureaucrat error2("error2", 151); // GradeTooLowException

    std::cout << L_GREEN << "==============Destructor Check==============" << RESET << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}