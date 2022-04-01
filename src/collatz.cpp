#include<iostream>
#include"../include/collatz.hpp"

namespace collatz
{
    int collatz(int input)
    {   
/*         if(input <= 0){throw std::domain_error("Input must be a positive non-zero integer.");}
        int steps = 0;
        while(input != 1)
        {
            (input%2 == 0) ? input/=2 : input = (3*input) + 1;
            steps++;
        }
        return steps; */


        // alternative implementation using recursion
        if(input <= 0){throw std::domain_error("Input must be a positive non-zero integer.");}
        if(input == 1)
            return 0;
        return (input%2 == 0) ? 1 + collatz(input/2) : 1 + collatz(3*input + 1);
    }
}
