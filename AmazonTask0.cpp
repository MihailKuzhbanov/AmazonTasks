// you can use includes, for example:
#include <vector>
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    //we will count unique positive numbers and comparison
    int count(1);

    //sort vector for "separate" negative numbers
    sort(A.begin(), A.end());

    //for all elements
    for (int i = 0; i < A.size(); i++)
    {
        //check positive and unique
        if (A[i] < 1 || A[i] == A[i-1]) continue;

        //check first missing element
        else if (A[i] != count) return count;

        //increase counter, which equal potentially missing number
        else count++;
    }
    return count;
}
