/*
 * File: main.cpp
 * Project: ex00
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

#define L_GREEN "\033[1;32m"
#define L_RED "\033[1;31m"
#define RESET "\033[0m"

int main(void) {
  try {
    std::cout << L_GREEN << "==============Bureaucrat Constructor Check==============" << RESET << std::endl;
    Bureaucrat kevin("Kevin", 1);
    Bureaucrat alex("Alex", 50);
    Bureaucrat jenny("Jenny", 130);

    std::cout << L_GREEN << "==============Concrete Form Constructor Check==============" << RESET << std::endl;
    ShrubberyCreationForm shrubbery("home");
    RobotomyRequestForm roboto("office");
    PresidentialPardonForm presidential("harry");

    std::cout << shrubbery << std::endl;
    std::cout << roboto << std::endl;
    std::cout << presidential << std::endl;

    std::cout << L_GREEN << "==============ShrubberyCreationForm Check==============" << RESET << std::endl;
    jenny.executeForm(shrubbery); // NotSignedException
    jenny.signForm(shrubbery);
    jenny.executeForm(shrubbery);

    std::cout << L_GREEN << "==============RobotomyRequestForm Check==============" << RESET << std::endl;
    alex.signForm(roboto);
    alex.executeForm(roboto); // GradeTooLowException
    kevin.executeForm(roboto);

    std::cout << L_GREEN << "==============PresidentialPardonForm Check==============" << RESET << std::endl;
    kevin.signForm(presidential);
    jenny.executeForm(presidential); // GradeTooLowException
    alex.executeForm(presidential); // GradeTooLowException
    kevin.executeForm(presidential);

    std::cout << L_GREEN << "==============Destructor Check==============" << RESET << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
