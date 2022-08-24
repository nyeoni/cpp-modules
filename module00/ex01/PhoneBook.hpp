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

#define MAX_CONTACT_NUM 8

class PhoneBook {
  Contact contacts_[MAX_CONTACT_NUM];
 public:
  PhoneBook();
  ~PhoneBook();
  int addContact(const Contact &newContact);
  int searchContact(int index);
  int getContact(int index);
};

#endif //PHONEBOOK_HPP
