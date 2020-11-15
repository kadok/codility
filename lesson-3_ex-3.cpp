// you can use includes, for example:
// you can use includes, for example:
#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int diff = 999999;
    for(int P = 1; P < (int) A.size(); P++)
    {
        int sumPart1 = 0;
        int sumPart2 = 0;
        sumPart1 = accumulate(A.begin()+P,A.end(),sumPart1);
        sumPart2 = accumulate(A.begin(),A.begin()+P,sumPart2);
        int diffParts = abs(sumPart1 - sumPart2);
        if (diff > diffParts)
            diff = diffParts;
        
    }
    return diff; 
}