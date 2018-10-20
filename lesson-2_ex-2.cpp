
/*
A non-empty array A consisting of N integers is given. The array contains an odd number of elements, and each element of the array can be paired with another element that has the same value, except for one element that is left unpaired.

For example, in array A such that:

  A[0] = 9  A[1] = 3  A[2] = 9
  A[3] = 3  A[4] = 9  A[5] = 7
  A[6] = 9
the elements at indexes 0 and 2 have value 9,
the elements at indexes 1 and 3 have value 3,
the elements at indexes 4 and 6 have value 9,
the element at index 5 has value 7 and is unpaired.
Write a function:

class Solution { public int solution(int[] A); }

that, given an array A consisting of N integers fulfilling the above conditions, returns the value of the unpaired element.

For example, given array A such that:

  A[0] = 9  A[1] = 3  A[2] = 9
  A[3] = 3  A[4] = 9  A[5] = 7
  A[6] = 9
the function should return 7, as explained in the example above.

Write an efficient algorithm for the following assumptions:

N is an odd integer within the range [1..1,000,000];
each element of array A is an integer within the range [1..1,000,000,000];
all but one of the values in A occur an even number of times.
*/

// you can use includes, for example:
// you can use includes, for example:
#include <algorithm>
#include <map>

using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {

    // Create a map to store the frequency of each element in vector
    map<int, int> countMap;
     
    // Iterate over the vector and store the frequency of each element in map
    for (auto & elem : A)
    {
    	auto result = countMap.insert(std::pair<int, int>(elem, 1));
    	if (result.second == false)
    		result.first->second++;
    }

    // Iterate over the map
    for (auto & elem : countMap)
    {
    	// If frequency count is greater than 1 then its a duplicate element
    	if (elem.second == 1)
    	{
    		//std::cout << elem.first << " :: " << elem.second << std::endl;
    		return elem.first;
    	}
    }
}
