#include <iostream>
using namespace std;

int main(){
  int year = 0;
  cout << "enter a year: ";

  cin >> year;
  if (year % 100 == 0 ) {
    cout<< year/100<<" Decades";
  }else{
    cout<< year/100 + 1<<" Decades";

  }
}