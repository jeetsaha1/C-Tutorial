#include <iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<"Displaying a vector : "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}
int main() {
    // Ways to create a vector
    vector<int> vec1;   // zero length vector
    vector<char> vec2(4);    //four ele. vector
    vector<double> vec3(4);
    vector<int> v(6,3); //6-ele. vector 0f 3s
    vec2.push_back('5');
    display(vec2);


    // int element,size = 5;
    // cout<<"Enter the sizeof the the vector: ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter the element to add to yhis vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    //vec1.pop_back();
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,5,566);
    
    // display(vec1);
    return 0;
}