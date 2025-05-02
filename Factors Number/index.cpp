// 61 
#include <iostream>
using namespace std;

int sum(int n){
    
    if (n == 1 ){
        return 1;
    }else {
        return n * sum(n - 1);
    }

}

int main(){
    int number;
    cout << "Enter a number to get factor: ";
    
    cin >> number ;   
    cout << sum(number)<< endl;
    
    return 0;
}