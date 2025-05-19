#include <iostream>
using namespace std;

void stringRe(string name){
    string str = "";
    for (int i = name.length(); i >= 0 ; i-- ){
        str.push_back(name[i]);
    }
    cout << str ;
}


int main(){
    stringRe("Salem");
    return 0;
} 
