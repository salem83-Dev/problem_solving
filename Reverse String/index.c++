#include <iostream>
using namespace std;

  string name(string word){
  string revName ="";
  for(int i= word.length()-1; i >= 0; i--){
    revName.push_back(word[i]);
  }
    return revName;
}

int main(){

  string le;
  cout << "Enter any string: ";
  cin >> le;
  cout << name(le);
}