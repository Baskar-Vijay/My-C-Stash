#include <iostream>
#include <string>
using namespace std;
void myfunction(string fname,int age ,string lname ,string country="Singapore"){
    if (age <10){
        cout <<"aren't u a little too young";
    }
    else if (age>10 && age <100){
        cout<<"hello"<< fname << lname;
    }
  
        

} 
int valuereturn(int y){
        return y*y;
    }
int main(){
    string x,z;
    int y;
    cout << "enter first name:"<<endl;
    cin >> x; 
     cout << "enter last name:"<<endl;
    cin >> z;  
    cout << "enter age:"<<endl;
    cin >> y;
    myfunction(x,y,z);
    cout<< valuereturn(y);
    return 0;   
}