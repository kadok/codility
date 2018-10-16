/*
A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N.

For example, number 9 has binary representation 1001 and contains a binary gap of length 2. The number 529 has binary representation 1000010001 and contains two binary gaps: one of length 4 and one of length 3. The number 20 has binary representation 10100 and contains one binary gap of length 1. The number 15 has binary representation 1111 and has no binary gaps. The number 32 has binary representation 100000 and has no binary gaps.

Write a function:

int solution(int N);

that, given a positive integer N, returns the length of its longest binary gap. The function should return 0 if N doesn't contain a binary gap.

For example, given N = 1041 the function should return 5, because N has binary representation 10000010001 and so its longest binary gap is of length 5. Given N = 32 the function should return 0, because N has binary representation '100000' and thus no binary gaps.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..2,147,483,647].
*/

// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <bitset>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    std::string binary = std::bitset<16>(N).to_string(); //to binary
    int diff = 0; int f1 = 0; int f2 = 0; int f3 = 0;
    for (int i =0; i < binary.size(); i++)
    {
        if (binary[i] == '1')
        {
            if (binary[i+1] == '0')
            {
                for (int j =i+1; i < binary.size(); i++)
                {
                    if (binary[j] == "1")
                    {
                        i = j - 1;
                        if (diff < (i+1) - j) 
                            diff = (i+1) - j;
                        break;
                    }
                }
            }
        }
    }
    if (diff > 0)
        return diff;
    else
        return 0;
}
