/*
 * File: main.cpp
 * Project: ex00
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

#define L_GREEN "\033[1;32m"
#define L_RED "\033[1;31m"
#define RESET "\033[0m"

int main(void) {
  try {
    std::cout << L_GREEN << "==============Intern makeForm Check==============" << RESET << std::endl;
    Intern someRandomIntern;
    Bureaucrat bureaucrat("nkim", 1);
    Form *rrf;

    std::cout << L_GREEN << "==============ShrubberyCreationForm Check==============" << RESET << std::endl;
    rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "shrubbery");
    bureaucrat.signForm(*rrf);
    bureaucrat.executeForm(*rrf);

    std::cout << L_GREEN << "==============RobotomyRequestForm Check==============" << RESET << std::endl;
    rrf = someRandomIntern.makeForm("RobotomyRequestForm", "robot");
    bureaucrat.signForm(*rrf);
    bureaucrat.executeForm(*rrf);

    std::cout << L_GREEN << "==============PresidentialPardonForm Check==============" << RESET << std::endl;
    rrf = someRandomIntern.makeForm("PresidentialPardonForm", "pres");
    bureaucrat.signForm(*rrf);
    bureaucrat.executeForm(*rrf);

    std::cout << L_GREEN << "==============UnknownForm Check==============" << RESET << std::endl;
    rrf = someRandomIntern.makeForm("unknown", "unknown");
    bureaucrat.signForm(*rrf);
    bureaucrat.executeForm(*rrf);

    std::cout << L_GREEN << "==============Destructor Check==============" << RESET << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
