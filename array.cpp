#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    map <string,int> namesandage={{"John",10},{"Tim cook",32}};
    cout<< "John"<<namesandage.at("John");
    /*string car;
    set <string> cars;
    cars.insert("Mazada");
    cars.insert("toyota");
    cars.insert("tesla");
    for(string car : cars){
        cout<<car;
    }
    cars.erase("tesla");
    for(string car : cars){
        cout<<car;
    }

    cout<<cars.empty();

    for (string car : cars){
        cout<< car <<endl;
    };*/

 return 0;
}