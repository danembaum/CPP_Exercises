#include "ex_4.hpp"

using namespace std;

void concatChar(string &s, char a){
    s+=a;

}

void removeLastChar(string &s){
    if (s.length() > 0)
        s.pop_back();
}


void validateString(string str){
    if (str.length() == 0 || str.length() > 100){
        throw std::invalid_argument("String is invalid");
    }
}

void validateKValue(int k){
    if (k <= 0 || k > 100){
        throw std::invalid_argument("k value is invalid: " + to_string(k));
    }
}

int findLastSubstringIndex(string t, string s){
    int value = -1;
    if (t.find(s) != string::npos) {
        value = s.length();
    }else if (s.length() == 0){
        value = 0;
    }
    return value;
}

string ConcatRemove(string s, string t, int k){
    validateString(s);
    validateString(t);
    validateKValue(k);

    int endOfSubstring = -1;  

    for (int i = 0; i <= k; i++){
        if (endOfSubstring < 0){
            removeLastChar(s);
            endOfSubstring = findLastSubstringIndex(t, s);

        } else {
            concatChar(s, t.at(endOfSubstring));
            if (s == t){
                return "Yes";
            }
            if (k - i < t.length() - endOfSubstring){
                return "No";
            }
            endOfSubstring += 1;
        }
    }
    return "No";
}

int main(int argc, char *argv[])
{
    /*
    Consider a string containing lowercase characters from the Portuguese alphabet. 
    You can perform two types of operations on this string:

    1. Concat a lowercase character from the Portuguese alphabet at the end of the string.
    2. Remove the last character from the string. If the string is empty, it will remain empty.

    Given an integer k and two strings s and t, determine if you can convert s to t using exactly k 
    operations described above on s. If possible, the program prints 'yes', otherwise it prints 'no'.

    For example, string s = [a, b, c] and string t = [d, e, f]. The number of moves k = 6. 
    To convert s to t, we first remove all characters using 3 moves. Then we concatenate each of the characters of t in the order.
    In the sixth move, you will have the expected string s. If more movements are available than necessary, they can be eliminated 
    by performing multiple removals on an empty string. If there are fewer movements, it would not be possible to create the new 
    string.
    */

    string s, t;
    int k;

    cout<<"Enter the s string: ";
    cin>>s;
    cout<<"Enter the t string: ";
    cin>>t;
    cout<<"Enter the k value: ";
    cin>>k;
    
    cout<<ConcatRemove(s, t, k)<<endl;

    return 0;
}