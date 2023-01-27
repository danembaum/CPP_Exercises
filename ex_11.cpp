#include <iostream>

using namespace std;

int stringLength(char *s){
    int count = 0;
    for (char c = *s; c; c=*++s)
        count++;
    return count;
}

void reverse(char *s, int init, int end){
    while(init<end)
    {
       s[init]^=s[end];
       s[end]^=s[init];
       s[init]^=s[end];
       init++;
       end--;
    }

}

int main(int argc, char *argv[])
{
    /*Make a program in C/C++ or Java language that reverses a string informed by the user 
    without using any temporary variable, buffer or any pre-existing function or method for this*/

    char *s;
    cout<<"Enter the string: ";
    cin>>s;
    int length = stringLength(s);

    int start=0;
    int end= length-1;
    reverse(s, start, end);
    cout<<s<<endl;
    
    return 0;
    
}