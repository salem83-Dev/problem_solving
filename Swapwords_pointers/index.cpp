#include <iostream>
using namespace std;

void swapLabels(string* ptr_one, string* ptr_two ){
    string temp;
    temp = *ptr_one;
    *ptr_one = *ptr_two;
    *ptr_two = temp;
 }

int main(){
    string Apple_box = "Orang";
    string Orange_box = "Apple";

    swapLabels(&Apple_box, &Orange_box);

    cout << Apple_box<<"\n";
    cout << Orange_box<<"\n";

    return 0;
} 
