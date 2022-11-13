/*
 * File: Intern.cpp
 * Project: ex03
 * Created Date: 2022/11/13
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "Intern.hpp"

// Constructor & Destructor
Intern::Intern() {
  std::cout << "Default Constructor of Intern called" << std::endl;
}
Intern::Intern(const Intern &copy) {
  (void) copy;
  std::cout << "Copy Constructor of Intern called" << std::endl;
}
Intern::~Intern() {
  std::cout << "Destructor of Intern called" << std::endl;
}

// Operator Overload
Intern &Intern::operator=(const Intern &src) {
  (void) src;
  return (*this);
}

// Method
Form *Intern::makeShrubberyCreationForm(std::string target) {
  return new ShrubberyCreationForm(target);
}
Form *Intern::makeRobotomyRequestForm(std::string target) {
  return new RobotomyRequestForm(target);
}
Form *Intern::makePresidentialPardonForm(std::string target) {
  return new PresidentialPardonForm(target);
}
Form *Intern::makeForm(std::string name, std::string target) {
  const std::string nameList[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
  Form *(Intern::*fp[3])(std::string target) = {&Intern::makeShrubberyCreationForm,
                                                &Intern::makeRobotomyRequestForm,
                                                &Intern::makePresidentialPardonForm};
  Form *res = NULL;

  for (int i = 0; i < 3; i++) {
    if (nameList[i] == name) {
      res = (this->*fp[i])(target);
      break;
    }
  }
  if (res == NULL) throw UnknownFormException();
  std::cout << "Intern creates " << name << std::endl;
  return (res);
}

// Exception
const char *Intern::UnknownFormException::what() const throw() {
  return "Error: Unknown Form name is given";
}
