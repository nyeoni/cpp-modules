/*
 * File: main.cpp
 * Project: ex00
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "Form.hpp"
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

    std::cout << L_GREEN << "==============Form Constructor Check==============" << RESET << std::endl;
    Form form1("importantForm", 2, 1);
    Form form2;
    Form form3(form1);
    Form form4 = form2;

    std::cout << form1 << std::endl;
    std::cout << form2 << std::endl;
    std::cout << form3 << std::endl;
    std::cout << form4 << std::endl;

    std::cout << L_GREEN << "==============Form Method Check==============" << RESET << std::endl;
    std::cout << form1 << std::endl;
    kevin.signForm(form1);
    std::cout << form1 << std::endl;
    std::cout << form3 << std::endl;

    std::cout << L_GREEN << "==============Form Exception Check==============" << RESET << std::endl;
    alex.signForm(form3); // GradeTooLowException
    jenny.signForm(form1); // SignedAlreadyException
    jenny.signForm(form2);
    alex.signForm(form4);

    std::cout << L_GREEN << "==============Destructor Check==============" << RESET << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
