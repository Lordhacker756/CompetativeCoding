/*
In cpp STL we have yet another awesome tool in our arsenal ie an inbuilt sort algorithm called In Sort, which is the best 
sorting alogo that exists, its a combo of three sorting algorithms => Quick Sort, Heap Sort and Insertion Sort.


#include<bits/stdc++.h>
using namespace std; 

bool cmp(int a , int b)
{
    return a>b; //Simple , just return the result you want wrt two elements.
}

int main(){
//Now this sort algo has a very dynamic implimentation, we can tweak the results using a function called comparator function

vector<int> v = {2,3,1,5,3,58,32,52,13,10,80,50,70,79};
//this is what you always saw in codes but never understood
sort(v.begin(),v.end(),cmp);
for(auto it : v)
{
    cout<<it<<" ";
}
}
*/

//A Question
#include <bits/stdc++.h>
using namespace std;

bool cpm(pair<string, int> a, pair<string, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<string, int>> v;
        int mark;
        string name;
        cin >> name >> mark;
        v.push_back({name, mark});
        sort(v.begin(), v.end(), cpm);
        for (auto i : v)
        {
            cout << i.first << " " << i.second << endl;
        }
    }
}