/*
 * File: PhoneBook.hpp
 * Project: cpp_modules
 * Created Date: 2022/08/24
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

#define MAX_CONTACT_NUM 8
#define MAX_COL_WIDTH 10
#define SUCCESS 0
#define FAIL -1

class PhoneBook {
  Contact contacts_[MAX_CONTACT_NUM];
  int index;
 public:
  PhoneBook();
  ~PhoneBook();
  int addContact(void);
  int searchContact(void);
  int getContact(int index);
};

#endif //PHONEBOOK_HPP
