#include <iostream>
#include <string>
using namespace std;
class person{
    public:
    int age;
    string name;
};
class perez{
    
  public:
   int t;
   int method(){
    return 10*t;
   }
};

int main(){
    person person1;
    person1.age =100;
    person1.name="Thomas";
    cout<< person1.name<<endl <<person1.age;
      person person2;
    person2.age =10;
    person2.name="Tim";
    cout<< person2.name<<endl <<person2.age;
    perez worldchampion;
    worldchampion.t=person2.age;
    cout<< worldchampion.method();
    return 0;
}