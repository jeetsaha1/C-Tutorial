#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream hout("Sample.txt");
    cout<<"Enter the name:  ";
    string name;
    cin>>name;

    hout<<" My name is : " + name;
    hout.close();


    ifstream hin("Sample.txt");
    string content;
    hin>>content;
    string s2 = "The content of the file is: " + content;
    getline(hin,s2);
    cout<<s2;
    hin.close();

    ofstream out;
    out.open("Sample.txt");
    
    out<<"This is you \n";
    out.close();
    

    ifstream in;
    in.open("Sample.txt");
    string s2;
    while(in.eof() == 0){
        getline(in,s2);
        cout<<s2;
    }
    in.close();
    
    return 0;
}