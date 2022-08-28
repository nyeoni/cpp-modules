/*
 * File: PhoneBook.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/24
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() { index = 0; }
PhoneBook::~PhoneBook() {}

static std::string printMaxString(std::string str) {
  if (str.length() > MAX_COL_WIDTH) {
    std::string subStr = str.substr(0, 9) + ".";
    return subStr;
  } else return str;
}

int PhoneBook::addContact() {
  std::string firstName;
  std::string lastName;
  std::string nickName;
  std::string phoneNumber;
  std::string darkestSecret;

  std::cout << "firstName : ";
  std::getline(std::cin, firstName);
  std::cout << "lastName : ";
  std::getline(std::cin, lastName);
  std::cout << "nickName : ";
  std::getline(std::cin, nickName);
  std::cout << "phoneNumber : ";
  std::getline(std::cin, phoneNumber);
  std::cout << "darkestSecret : ";
  std::getline(std::cin, darkestSecret);

  Contact newContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
  contacts_[index] = newContact;
  if (index + 1 == MAX_CONTACT_NUM) index = 0;
  else index++;
  return index;
}

int PhoneBook::searchContact() {
  std::string str;
  int index;

  std::cout << std::setw(10) << "index" << "|"
            << std::setw(10) << "firstName" << "|"
            << std::setw(10) << "lastName" << "|"
            << std::setw(10) << "nickName" << std::endl;
  for (int i = 0; i < MAX_CONTACT_NUM && !contacts_[i].getFirstName().empty(); i++) {
    std::cout << std::setw(10) << i << "|"
              << std::setw(10) << printMaxString(contacts_[i].getFirstName()) << "|"
              << std::setw(10) << printMaxString(contacts_[i].getLastName()) << "|"
              << std::setw(10) << printMaxString(contacts_[i].getNickName()) << std::endl;
  }
  std::cout << "\033[1;36mTARGET INDEX : \033[0m";
  std::getline(std::cin, str);
  index = std::atoi(str.c_str());

  return (getContact(index));
}

int PhoneBook::getContact(int index) {
  if (index >= MAX_CONTACT_NUM || contacts_[index].getFirstName().empty()) {
    std::cout << "Error: Invalid index number." << std::endl;
    return (FAIL);
  }
  std::cout << std::setw(10) << "firstName : " << contacts_[index].getFirstName() << std::endl
            << std::setw(10) << "lastName : " << contacts_[index].getLastName() << std::endl
            << std::setw(10) << "nickName : " << contacts_[index].getNickName() << std::endl
            << std::setw(10) << "phoneNumber : " << contacts_[index].getPhoneNumber() << std::endl
            << std::setw(10) << "darkestSecret : " << contacts_[index].getDarkestSecret() << std::endl;
  return (SUCCESS);
}
