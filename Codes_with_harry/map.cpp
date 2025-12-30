#include <iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associative way
int main() {
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;

    marksMap.insert({{"Kozume",169},{"Kuroo",187}});
    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter!= marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max-size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty return value is: "<<marksMap.empty()<<endl;
    return 0;
}