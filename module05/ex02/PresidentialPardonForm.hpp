/*
 * File: PresidentialPardonForm.hpp
 * Project: ex02
 * Created Date: 2022/11/12
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef PRESIDENTIALPARDONFORM_HPP_
#define PRESIDENTIALPARDONFORM_HPP_

#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
 private:
  std::string target_;
 public:
  PresidentialPardonForm();
  PresidentialPardonForm(const std::string &target);
  PresidentialPardonForm(const PresidentialPardonForm &copy);
  ~PresidentialPardonForm();

  PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

  void execute(const Bureaucrat &executor) const;
};

#endif //PRESIDENTIALPARDONFORM_HPP_
