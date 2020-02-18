#include <vector>

//function for calculate sum in window of data vector
int SumInWindow(int start, int amount, vector<int> &input)
{
    int result(0);
    for (int i = start; i < start + amount; i++)
    {
        if (start + amount <= input.size()) result += input[i];
    }
    return result;
}

int solution(vector<int> &A, int K, int L) {

    //check possibility collect apples
    if (K + L > A.size()) return -1;


    //define borders(left/right), sums(for Alice and Bob)
    //and overall sum for iterations
    int left(0), right(A.size() - 1), sumK(0), sumL(0), sumA(0);

    while (left + K <= right -L)
    {
        //check sum in sliding window for Alice
        for (int i = left; i < right - L; i++)
        {
            int windowSum = SumInWindow(i, K, A);
            if (windowSum > sumK) sumK = windowSum;
        }

        //check sum in sliding window for Bob
        for (int i = right; i > left + K; i--)
        {
            int windowSum = SumInWindow(i, L, A);
            if (windowSum > sumL) sumL = windowSum;
        }

        //check overall sum for current windows
        if (sumA < sumK + sumL) sumA = sumK + sumL;

        //move window borders
        left++;
        right--;
    }
    return sumA;
}
