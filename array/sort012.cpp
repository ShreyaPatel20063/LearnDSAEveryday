// Sort an array of 0s, 1s and 2s in ascending order
#include<iostream>
using namespace std;

void Sort(int arr[], int len){
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"N: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
        if(arr[i]==0 ||arr[i]==1 ||arr[i]==2){
            continue;
        }else{
            cout<<"Enter 0s,1s or 2s: ";
            cin>>arr[i];
        }
    }

    Sort(arr, n);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}