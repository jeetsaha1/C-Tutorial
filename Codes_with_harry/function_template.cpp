#include <iostream>
using namespace std;

template<class T1, class T2>
float funcAvg(T1 a, T2 b){
    return (a+b)/2.0;
}

int main() {
    cout<<"The avg of the two numbers : "<<funcAvg(2,3);
    return 0;
}