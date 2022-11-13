/*
 * File: Bureaucrat.cpp
 * Project: ex00
 * Created Date: 2022/11/11
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Bureaucrat.hpp"
#include <iostream>

// Constructor & Destructor
Bureaucrat::Bureaucrat() : name_("noname"), grade_(150) {
  std::cout << "Default Constructor of Bureaucrat called" << std::endl;
}
Bureaucrat::Bureaucrat(const std::string &name, int grade) : name_(name), grade_(grade) {
  if (grade_ < 1) throw GradeTooHighException();
  else if (grade_ > 150) throw GradeTooLowException();
  std::cout << "Constructor of Bureaucrat(name, grade) called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name_(copy.name_), grade_(copy.grade_) {
  std::cout << "Copy Constructor of Bureaucrat called" << std::endl;
}
Bureaucrat::~Bureaucrat() {
  std::cout << "Destructor of Bureaucrat called" << std::endl;
}

// Operator Overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
  // const name can't change
  this->grade_ = src.getGrade();
  std::cout << "Assignment Operator of Bureaucrat called" << std::endl; 
  return (*this);
}
std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
  os << bureaucrat.getName() << ", bureaucrat grade "
     << bureaucrat.getGrade() << ".";
  return (os);
}

// Getter & Setter
const std::string &Bureaucrat::getName() const {
  return name_;
}
int Bureaucrat::getGrade() const {
  return grade_;
}

// Methods
void Bureaucrat::incrementGrade() {
  if (grade_ <= 1) throw GradeTooHighException();
  grade_--;
}
void Bureaucrat::decrementGrade() {
  if (grade_ >= 150) throw GradeTooLowException();
  grade_++;
}

// Exceptions
const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "Error: Grade Too High";
}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "Error: Grade Too Low";
}
