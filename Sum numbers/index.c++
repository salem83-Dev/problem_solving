#include <iostream>
#include <vector>
using namespace std;

int main() { 
int nums[5];
cout << "Enter Five numbers to sum: \n";
int sum =0 ;
for(int i =0;i<5;i++){
    cin>>nums[i];
   sum += nums[i];
}
cout << "=========\n";
    cout <<"The sum of five nums are: " <<sum <<" ";
return 0;
}