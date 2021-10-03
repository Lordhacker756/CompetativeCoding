/*
The MEX (minimum excluded) of an array is the smallest non-negative integer that does not belong to the array. For instance:

The MEX of [2,2,1] is 0, because 0 does not belong to the array.
The MEX of [3,1,0,1] is 2, because 0 and 1 belong to the array, but 2 does not.
The MEX of [0,3,1,2] is 4 because 0,1,2 and 3 belong to the array, but 4 does not.
Find the maximum possible MEX of an array of non-negative integers such that the bitwise OR of the elements in the array 
does not exceed X.
*/

#include <bits/stdc++.h>
using namespace std;

const long long N = 1e7;
long long arr[N];

void hash()
{
    for (int i = 2; i < N; i++)
    {
        arr[i] = 2 * i - 1;
    }
}

int main()
{
    /*
⚠️The main concept of this question are,
1) The OR of all the element lying between two numbers in form of 2^n are fixed⚠️
eg 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16
OR: 0-3=>3, 0-4,5,6,7 => 7 , 0-8,9,10...15 => 15 , 0-16,17,18...31 =>32
for numbers that can be expressed as 2^n, their OR from 0 to the number is 2n-1, eg 8 => 2(8)-1 =>15
and for numbers that arent in form of 2^n, it's simply equal to n-1 where n is the closest number which can be represented
in form of 2^n  
*/
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        if (x == 0)
            cout << 1 << endl;
        else if (x == 1 || x == 2)
            cout << 2 << endl;
        //CONDITION TO CHECK 2^n
        else if (x & (x - 1) == 0) //🔥⚠️Important concept, AND of a number which is of 2^n and the number just b4 it is always 0!
        //eg 8 is 1000 and 7 is 0111 make their and and you'll have 0000
        {
            cout << x << endl; //here x is 2^n
        }
        else
        {
            long long res = 1;
            while ( 2 * res <= x)
            {
                res*=2;
            }
            if(x==res)
            {
                cout<<x<<endl;
            }
            else if(x==(2*res-1))
            cout<<x+1<<endl;
            else
            cout<<res<<endl;
            
        }
    }
}