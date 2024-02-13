#include <iostream>
using namespace std;

void arrReverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int temp=0;
        temp = arr[i];
        arr[i] = arr[int(n) - i-1];
        arr[int(n) - i-1] = temp;
    }
}

int main(){
    int arrlen;
    cin>>arrlen;

    int arr[arrlen];
    for(int i=0;i<arrlen;i++){
        cin>>arr[i];
    }
    
    arrReverse(arr, arrlen);

    for(int i=0;i<arrlen;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}