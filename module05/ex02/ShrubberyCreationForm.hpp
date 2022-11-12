/*
 * File: ShrubberyCreationForm.hpp
 * Project: ex02
 * Created Date: 2022/11/12
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef SHRUBBERYCREATIONFORM_HPP_
#define SHRUBBERYCREATIONFORM_HPP_

#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
 private:
  std::string target_;
 public:
  ShrubberyCreationForm();
  ShrubberyCreationForm(const std::string &target);
  ShrubberyCreationForm(const ShrubberyCreationForm &copy);
  ~ShrubberyCreationForm();

  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

  void execute(const Bureaucrat &executor) const;
};

#endif // SHRUBBERYCREATIONFORM_HPP_
