#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    /*Make a program in C/C++ or Java language that calculates the length of a string informed by the user 
    (do not use any pre-existing function or method for this, such as len(), count(), strlen() or lenght())*/

    char *s = argv[1];
    int count = 0;
    for (char c = *s; c; c=*++s)
        count++;
    cout<<"Count: "<<count<<endl;
    return 0;
}