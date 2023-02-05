// associative containers allows us to store elements in sorted order

#include<iostream>
#include<set>
using namespace std;
int main(int argc, char const *argv[])
{
    // initialise a set of int type
    set<int> numbers = {1,45,89,90,7,1};

    // print the set
    cout<<"Numbers: "<<endl;
    for(auto &num:numbers){
        cout<<num<<endl;
    }
    
    return 0;
}
