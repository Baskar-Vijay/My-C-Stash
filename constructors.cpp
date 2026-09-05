#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    string name;
    string brand;
    int year;
    Car(){
        name="unknown";
        brand="unknown";
        year=0;
    }
    
    Car (string x,string y, int z);
    /*Car (string x,string y, int z){
        brand=x;
        name=y;
        year=z;*/
    public:
     int creditcardNo=707070;
    };
     Car ::Car(string x,string y, int z){
        brand=x;
        name=y;
        year=z;
}
int main(){
    Car carobj1("Bmw","I3",2007);
    Car carobj2("Tesla","Model Y",2022);
    Car carobj3;
    cout<<carobj1.brand<<","<<carobj1.name<<","<<carobj1.year;
    cout<<carobj3.brand<<","<<carobj3.name<<","<<carobj3.year;
    cout<<carobj3.creditcardNo;
    return 0;
}