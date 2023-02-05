# include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    // initialise a vector of int type
    vector<int> numbers = {1,100,109,199};
    // print the vector 

    cout<<"Numbers are: "<<endl;
    for(auto &num:numbers){
        cout<<num<<endl;
    }
    
    return 0;
}
