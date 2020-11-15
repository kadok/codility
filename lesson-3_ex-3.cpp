#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int diff = std::numeric_limits<int>::max();
    int sumLeft = 0;
    int sumRight = accumulate(A.begin(),A.end(),0);
    for(int P = 1; P < (int) A.size(); P++)
    {
        sumLeft += A[P-1];
        sumRight -= A[P-1];
        
        int diffParts = abs(sumLeft - sumRight);
        if (diff > diffParts)
            diff = diffParts;
        
    }
    return diff; 
}