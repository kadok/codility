#include <vector>
#include <map>

using namespace std;

int solution(int X, vector<int> &A)
{
    unsigned int N = A.size();
    int numElements = 0;
    map <int,int> M;
    
    for (unsigned int i=0; i<N; i++)
    {
        
        if (M.insert(pair<int,int>(A[i],1)).second)
            numElements++;
        
        if (numElements == X)
            return i;
    }
    
    return -1;
}