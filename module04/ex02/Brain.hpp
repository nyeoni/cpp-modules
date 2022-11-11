/*
 * File: Brain.hpp
 * Project: ex01
 * Created Date: 2022/11/10
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

#define IDEA_CNT 100

class Brain {
 private:
  std::string ideas_[IDEA_CNT];
 public:
  Brain(void);
  Brain(const Brain &copy);
  ~Brain();

  Brain &operator=(const Brain &src);

  const std::string *getIdeas() const;
  void setIdea(int index, std::string idea);
};

#endif //BRAIN_HPP
