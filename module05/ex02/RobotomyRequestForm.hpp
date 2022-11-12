/*
 * File: RobotomyRequestForm.hpp
 * Project: ex02
 * Created Date: 2022/11/12
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef ROBOTOMYREQUESTFORM_HPP_
#define ROBOTOMYREQUESTFORM_HPP_

#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
 private:
  std::string target_;
 public:
  RobotomyRequestForm();
  RobotomyRequestForm(const std::string &target);
  RobotomyRequestForm(const RobotomyRequestForm &copy);
  ~RobotomyRequestForm();

  RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

  void execute(const Bureaucrat &executor) const;
};

#endif //ROBOTOMYREQUESTFORM_HPP_
