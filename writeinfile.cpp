#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
using namespace std;
namespace fs =std::filesystem;
int main(){
    ofstream Myfile("filename.txt");
    Myfile<< "files can be tricky";
    Myfile.close(); 
    string mytext;
    const string filename ="filename.txt";
    struct Employee {
        string name;
        
    };
    ifstream myreadfile("filetest.txt");
    while(getline(myreadfile,mytext)){
        cout<<mytext;
        }
    myreadfile.close();
     fs::path fullPath=fs::absolute(filename);
    cout<<"file created at" << fullPath <<"\n";
}