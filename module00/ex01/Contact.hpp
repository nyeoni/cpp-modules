/*
 * File: Contact.hpp
 * Project: cpp_modules
 * Created Date: 2022/08/24
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
  std::string firstName_;
  std::string lastName_;
  std::string nickName_;
  std::string phoneNumber_;
  std::string darkestSecret_;
 public:
  Contact(void);
  Contact(const std::string &first_name,
          const std::string &last_name,
          const std::string &nick_name,
          const std::string &phone_number,
          const std::string &darkest_secret);
  ~Contact();
  const std::string &getFirstName() const;
  const std::string &getLastName() const;
  const std::string &getNickName() const;
  const std::string &getPhoneNumber() const;
  const std::string &getDarkestSecret() const;
};

#endif //CONTACT_HPP
