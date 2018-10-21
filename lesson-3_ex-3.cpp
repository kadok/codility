// you can use includes, for example:
#include <algorithm>
#include <stdlib.h> 
#include <numeric>
#include <algorithm> 

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int diff = 999999;
    for(int P = 1; P < (int) A.size(); P++)
    {
        int sumPart1 = 0;
        int sumPart2 = 0;

        for (int i = 0; i <= P-1; i++) 
            sumPart1 += A[i];
            
        for (int i = P; i < (int)A.size(); i++) 
            sumPart2 += A[i];

        int diffParts = abs(sumPart1 - sumPart2);
        if (diff > diffParts)
            diff = diffParts;
    }
    
    return diff; 
}
