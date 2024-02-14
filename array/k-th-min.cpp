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
    int k,len;
    cout<<"Length of array: ";
    cin>>len;

    int arr[len];
    for (int i = 0; i < len; i++){
        cin>>arr[i];
    }
    
    cout<<"k: ";
    cin>>k;

    Sort(arr, len);
    
    cout << k << "th element is: " << arr[k-1];

    return 0;
}