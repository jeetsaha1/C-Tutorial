#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>        // --> Deafault parameters

class Jeet{
    public:
        T1 a;
        T2 b;
        T3 c;
        Jeet(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is : "<<a<<endl;
            cout<<"The value of b is : "<<b<<endl;
            cout<<"The value of c is : "<<c<<endl;
        }
};



int main() {
    Jeet <> obj(12,28.5,'f');
    obj.display();
    cout<<endl;
    Jeet <char, char, int> obj2('c','f', 87);
    obj2.display();
    return 0;
}