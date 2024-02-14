// An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
// Examples : 
// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5

#include<iostream>
using namespace std;

void Rearrange(int arr[], int n){
    for (int i = 0; i < n; i++){
        for(int j=i; j<n; j++){
            if(arr[i] > 0 && arr[j] < 0){
                swap(arr[i], arr[j]);
            }
        }
    }
    // int s=0, e=n-1;
    // while(s<=e){
    //     if(arr[s]>0 && arr[e]<0){
    //         swap(arr[s], arr[e]);
    //     }
    //     s++,e--;
    // } //incorrect method = no true output
}

int main(){
    int n;
    cout<<"No. of elements: ";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    Rearrange(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }    

    return 0;
}