#include <iostream>
using namespace std;

int max(int* ptr,int size){
    int max = *ptr;
    for (int i=0;i < size;i++){
        if (*(ptr+i) > max){
            max = *(ptr+i);
        }
    }
    return max;
}
int main(){
    int arr[] = {1, 2, 3,5,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<max(arr,size);
    return 0;
}
