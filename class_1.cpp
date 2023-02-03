// class and object in c++
#include<iostream>
using namespace std;
class Room {
    public:
     double len,breadth,height;

    double calculateArea(){
        return len*breadth;
    }
    double calculateVolume(){
        return len*breadth*height;
    }
  
};
int main(int argc, char const *argv[])
{
    Room r1; // creating object

    r1.len=10;
    r1.breadth=9;
    r1.height=5;

    cout<<"Area of Room: "<<r1.calculateArea()<<endl;
    cout<<"Volume of Room: "<<r1.calculateVolume()<<endl;
    return 0;
}

