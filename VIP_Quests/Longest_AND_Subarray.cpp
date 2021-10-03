/*
You are given an integer N. Consider the sequence containing the integers 1,2,…,N in increasing order (each exactly once). 
Find the length of the longest subarray in this sequence such that the bitwise AND of all elements in the subarray is 
positive.

Input Format

The first line contains T denoting the number of test cases. Then the test cases follow.
Each test case contains a single integer N on a single line.

Output Format
For each test case, output on a single line the length of the longest subarray that satisfy the given property.

Sample Input
5
1
2
3
4
7

Sample Output
1
1
2
2
4

Explanation
Test case 1: The only possible subarray we can choose is [1].

Test case 2: We can't take the entire sequence [1,2] as a subarray because the bitwise AND of 1 and 2 is zero. We can take 
either [1] or [2] as a subarray.

Test case 4: It is optimal to take the subarray [2,3] and the bitwise AND of 2 and 3 is 2.

Test case 5: It is optimal to take the subarray [4,5,6,7] and the bitwise AND of all integers in this subarray is 4.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
🔑Key Concepts :-
🔸AND Operation of n and n-1 of number in series of 2,4,8,16,32,64,128.. is always 0, so here we will not take these elems
in our subarray, rather we'll have them in their intervals
🔹The number of elements lying between 2^n And 2^n+1 is n^n+1/2 eg 16-32 ke beech me 16 elems.

APPROACH:
let the number given is x; ab dekho which sequence has more elements, x->nearest 2^n or 2^n-1->2^n-2
eg 35, here 16-32 will have 16 elements and 35-32 will just have 3 so our subarray will be between 16-32
*/

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        long long ans = 1;
        while (ans * 2 <= n)
        {
            ans *= 2;
        }
        long long a = n - ans + 1;
        if (n == ans)
            cout << ans / 2 << endl;
        else
            cout << max(a, ans / 2) << endl;
    }
}