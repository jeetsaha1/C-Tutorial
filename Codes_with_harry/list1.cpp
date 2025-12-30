#include <iostream>
#include<list>
using namespace std;


void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin() ; it !=  lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main() {
    list<int> list1;     // list of zero length
    // list<int> list2(3);     //list of size 7
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    // list1.pop_back();
    display(list1);
    // list1.pop_front();
    // list1.remove(9);
    list<int> list2(3); 
    list<int> :: iterator iter = list2.begin();
    
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++; 
    display(list2);
    list1.merge(list2);
    display(list1);
    list1.reverse();
    display(list1);
    return 0;
}