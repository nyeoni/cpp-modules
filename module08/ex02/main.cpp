/*
 * File: main.cpp
 * Project: ex00
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main(void) {
  {
    std::cout << "=============== MutantStack  ==============" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << "=============== top mstack ==============" << std::endl;
    std::cout << mstack.top() << std::endl;

    mstack.pop();
    std::cout << "=============== size mstack ==============" << std::endl;
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;

    std::cout << "=============== print mstack ==============" << std::endl;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
    std::stack<int> s(mstack);
  }
  {
    std::cout << "=============== list  ==============" << std::endl;
    std::list<int> testlist;
    testlist.push_back(5);
    testlist.push_back(17);

    std::cout << "=============== top testlist ==============" << std::endl;
    std::cout << *(--testlist.end()) << std::endl;

    testlist.pop_back();
    std::cout << "=============== size testlist ==============" << std::endl;
    std::cout << testlist.size() << std::endl;

    testlist.push_back(3);
    testlist.push_back(5);
    testlist.push_back(737);
    //[...]
    testlist.push_back(0);
    std::list<int>::iterator it = testlist.begin();
    std::list<int>::iterator ite = testlist.end();
    ++it;
    --it;

    std::cout << "=============== print testlist ==============" << std::endl;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
  }

  std::cout << "=============== Leaks Check  ==============" << std::endl;
  system("leaks ex02");
  return 0;
}
