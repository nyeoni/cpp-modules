/*
 * File: Intern.hpp
 * Project: ex03
 * Created Date: 2022/11/13
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef INTERN_HPP_
#define INTERN_HPP_

#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
 public:
  Intern();
  Intern(const Intern &copy);
  ~Intern();

  Intern &operator=(const Intern &src);

  Form *makeShrubberyCreationForm(std::string target);
  Form *makeRobotomyRequestForm(std::string target);
  Form *makePresidentialPardonForm(std::string target);
  Form *makeForm(std::string name, std::string target);

  class UnknownFormException : public std::exception {
   public:
    virtual const char *what() const _NOEXCEPT;
  };
};

#endif //INTERN_HPP_
