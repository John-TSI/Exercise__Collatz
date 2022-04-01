// https://exercism.org/tracks/cpp/exercises/collatz-conjecture

#include<iostream>
#include"../include/collatz.hpp"

int main()
{
    int input = 1;
    std::cout << "Enter a number to compute its total stopping time:" << std::endl;
    std::cin >> input;
    std::cout << collatz::collatz(input);

    return 0;
}
