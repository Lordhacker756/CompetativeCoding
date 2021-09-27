// To sort a string weather numeric or alphabetic 😎
#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    /*By default sort will arrange in ascending 
    order, agar descending order me karna ho to we 
    use:-

    sort(starting index, ending index , greater<data type>())

    yaha data type matlab int hai ye char.

    🌟This method is also useful in sortig arrays!

    */

    /*
   ⭐⭐ Piro tip! agar quesition me pucha hai find the largest number possible then simply sort that thing in descending order!
   */

    sort(str.begin(), str.end(), greater<int>());

    cout <<"The greatest number possible is "<<str << endl;
    
    return 0;
}