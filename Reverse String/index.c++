/* 
Reverse String
File: index.c++
"""
Problem:
Reverse Words

Description:
Complete the function that accepts a string parameter, and reverses each word in the string.

Example:
Input: "Hello!"
Output: "!olleH"
*/

#include <iostream>
using namespace std;
// reverse fun 
  string  reverse_string(string word){
  string revName ="";
  for(int i= word.length()-1; i >= 0; i--){
    revName.push_back(word[i]);
  }
    return revName;
}
// main fun 
int main(){

  string word;
  cout << "Enter any string: ";
  cin >> word;
  cout << revers_string(le);
}
