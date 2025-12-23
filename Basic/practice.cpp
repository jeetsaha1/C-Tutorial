#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // // Opening a file with a constructor and write into it.
    // string s1 = " Jeet Bhai";
    // ofstream out("sample.txt");
    // out<<s1;

    string s2;
    ifstream in("sample_b.txt");
    getline(in, s2);    // For printing the whole line
    // in>>s2 --> For printing the word, space is not identified by this language
    cout<<s2;
    
    
    return 0;
}