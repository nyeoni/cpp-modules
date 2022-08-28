/*
 * File: Contact.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/24
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "Contact.hpp"

Contact::Contact() {}
Contact::Contact(const std::string &first_name,
                 const std::string &last_name,
                 const std::string &nick_name,
                 const std::string &phone_number,
                 const std::string &darkest_secret)
    : firstName_(first_name),
      lastName_(last_name),
      nickName_(nick_name),
      phoneNumber_(phone_number),
      darkestSecret_(darkest_secret) {}
Contact::~Contact() {}
const std::string &Contact::getFirstName() const { return firstName_; }
const std::string &Contact::getLastName() const { return lastName_; }
const std::string &Contact::getNickName() const { return nickName_; }
const std::string &Contact::getPhoneNumber() const { return phoneNumber_; }
const std::string &Contact::getDarkestSecret() const { return darkestSecret_; }
