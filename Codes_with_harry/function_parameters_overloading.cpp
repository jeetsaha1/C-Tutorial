#include <iostream>
using namespace std;

template <class T>
class Harry{
    public:
        T data;
        Harry(T a){
            this->data = a;
        }
        void display();
};

template <class T>
void Harry<T> :: display(){
    cout<<"The value is : "<<data<<endl;;
}


int return_(int data){
    cout<<"I am the first function: "<<data<<endl;;     //--> Exact function takes the highest
}

template <class T>
int return_(T data){
    cout<<"I am the Templeted function: "<<data<<endl;;
}

int main() {
    Harry<int> obj(5);
    obj.display();
    return_(4);
    return 0;
}