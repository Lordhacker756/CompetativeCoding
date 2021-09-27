//Two methods to do it, one without any function, one with a function!
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    // ⚠ Remember the difference between the upper and lower case of a following alphabet is 32 ie, 'a -'A' = 32

    // Converting upper case to lower case

    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != ' ')
        {
            str.at(i) -= 32;
        }
        cout << str.at(i);
    }
    cout << endl;

    //Converting lower case to upper case

    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != ' ')
        {
            str.at(i) += 32;
        }

        cout << str.at(i);
    }
    cout << endl;

    // But ye bada lamba chauda tarika hai so we have a shortcut too!

    // to lower case
    transform(str.begin(),str.end(),str.begin(),::tolower);

    cout<<str;

    // to upper case
    transform(str.begin(),str.end(),str.begin(), ::toupper);

    cout<<str;

    return 0;
}