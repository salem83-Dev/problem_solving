#include <iostream>
using namespace std;

int main(){

int num;
cout<<"enter one number: ";
cin>> num;

if (num % 2 == 0){
  cout << num * 8 << endl;
}else {
  cout<< num * 9 << endl;
}
}