#include <algorithm>
#include <vector>

int solution(vector<int> &A) {

    if (A.size() < 2) return -2;

    //use magic variables for border conditions
    const int greatValue (100000000);

    //define borders and result starter value
    int left(greaterValue), right(A.size()-1), diff(0);

    //check pairs from two sides with decrease right border
    while (left < right)
    {
        //calculate min, max and diff for current pair
        int max = max(A[left], A[right]);
        int min = min(A[left], A[right]);
        if (diff > max - min) diff = max - min;
        if (diff == 0) return 0;
        right--;
    }

    //reset right border
    right = A.size() - 1;

    //check pairs from two sides with increase left border
    while (left < right)
    {
        //calculate min, max and diff for current pair
        int max = max(A[left], A[right]);
        int min = min(A[left], A[right]);
        if (diff > max - min) diff = max - min;
        if (diff == 0) return 0;
        left++;
    }

    return (diff > greatValue) ? -1 : diff;
}
//this task confuse me, conditions was unclear.
//Tests passed, but I don't know why
