#include <iostream>
#include <string>
using namespace std;
 struct car
    {
        string brand;
        int year;
        string name;
    };
    enum level{
        Low,
        high,medium
    };
int main(){
    car car1;
    car1.brand="tesla";
    car1.year=2008;
    car1.name="ModelY";
    cout << car1.name<<car1.year << car1.brand;
    enum level myVar =medium;
    string* ptr = &car1.name;
    cout<<ptr<<endl<<*ptr;
    cout << myVar<<endl;
    cout << &myVar;//to get info location where the info is stored
    return 0;
}