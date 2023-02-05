// unordered_set class to demonstrate the working of unordered associative 

#include<iostream>
#include<unordered_set>

using namespace std;

int main(int argc, char const *argv[])
{
    // initialise an unordered_set of int type
    unordered_set<int> numbers = {1,90,98,56,100};

    //print the set
    cout<<"Numbers: "<<endl;
    for(auto &num:numbers){
        cout<<num<<endl;
        
    } 


    
    return 0;
}
