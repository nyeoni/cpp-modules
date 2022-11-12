/*
 * File: Form.hpp
 * Project: ex01
 * Created Date: 2022/11/11
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef FORM_HPP_
#define FORM_HPP_

#include <string>

class Bureaucrat;
class Form {
 private:
  const std::string name_;
  bool isSigned_;
  const int signGrade_;
  const int executeGrade_;
 public:
  Form();
  Form(const std::string &name, const int signed_grade, const int execute_grade);
  Form(const Form &copy);
  ~Form();

  Form &operator=(const Form &src);

  const std::string &getName() const;
  bool IsSigned() const;
  int getSignGrade() const;
  int getExecuteGrade() const;

  void beSigned(const Bureaucrat &bureaucrat);

  class GradeTooHighException : public std::exception {
   public:
    virtual const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
   public:
    virtual const char *what() const throw();
  };
  class SignedAlreadyException : public std::exception {
   public:
    virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //FORM_HPP_
