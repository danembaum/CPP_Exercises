#include <iostream>

using namespace std;

int main()
{
    /*Write a C/C++ or Java program that prints each number from 1 to 100 on a new line.

    For each multiple of 3, print "Foo" instead of the number.
    For each multiple of 5, print "Baa" instead of the number.
    For multiple numbers simultaneously of 3 and 5, print "FooBaa", instead of the number.

    Your solution should be using as few lines of code as possible, but you should produce efficient code*/
    
    cout<<"Program FOO-BAA\n";
    
    
    for (int i = 1; i <= 100; i++){
        if (i % 3 == 0 && i % 5 == 0){
            cout<<"FooBaa"<<endl;
        } else if (i % 3 == 0){
            cout<<"Foo"<<endl;
        } else if (i % 5 == 0){
            cout<<"Baa"<<endl;
        } else {
           cout<<i<<endl;
        }
        
    }

    return 0;
}
