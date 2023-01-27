#include <iostream>

using namespace std;

int main()
{
    /*Make a program in C/C++ or Java language that calculates the length of a string informed by the user 
    (do not use any pre-existing function or method for this, such as len(), count(), strlen() or lenght())*/

    char *s;
    cout<<"Enter the string: ";
    cin>>s;
    int count = 0;
    for (char c = *s; c; c=*++s)
        count++;
    cout<<"Count: "<<count<<endl;
    return 0;
}