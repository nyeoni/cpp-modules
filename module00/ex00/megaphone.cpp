/*
 * File: megaphone.cpp
 * Project: ex00
 * Created Date: 2022-07-25 06:05
 * Author: nkim
 * -----
 * Last Modified: 2022-07-25 09:03
 * Modified By: nkim
 * -----
 * Copyright (c) 2022 42seoul
 */

#include <cctype>
#include <cstdlib>
#include <iostream>

int main(int argc, char **argv) {
    int i;
    char *words;

    if (argc <= 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
        return (EXIT_FAILURE);
    }
    i = 1;
    while (i < argc) {
        words = argv[i++];
        while (*words) {
            std::cout << (char)std::toupper(*words);
            words++;
        }
        std::cout << " ";
    }
    std::cout << std::endl;
    return (EXIT_SUCCESS);
}
