// you can use includes, for example:
#include <algorithm>
#include <string>
#include <map>
#include <vector>

using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A)
{
    // write your code in C++14 (g++ 6.2.0)
    unsigned int N = A.size();
    sort(A.begin(), A.end()); 
    
    map<int, int> m;

    for (unsigned int i = 0; i < N; i++)
    {
        if (A[i] != i+1)
            return 0;
        
        if (m.insert(pair<int,int>(i,A[i])).second == false)
            return 0;
    }
    
    if (m.size() == A[N-1])
    {
        return 1;
    }
    
    return 0;
}