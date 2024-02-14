#include<iostream>
using namespace std;

struct minMax1
{
    int min;
    int max;
};

struct minMax1 minmaxArray(int arr[], int n, int min, int max){
    int s=0, e=n-1;
    
    struct minMax1 minMax;
    minMax.min = min;
    minMax.max = max;

    while(s<=e){
        if(arr[s] <= arr[e]){
            if(minMax.min > arr[s]){
                minMax.min = arr[s];
            }
            if(minMax.max < arr[e]){
                minMax.max = arr[e];
            }
        }else {
            if(minMax.min > arr[e]){
                minMax.min = arr[e];
            }
            if(minMax.max < arr[s]){
                minMax.max = arr[s];
            }
        }
        s++, e--;
    }   
    return minMax;
}

int main(){
    int n, min, max;
    cout<<"arr length: ";
    cin>>n;

    int arr[n];
    cout<<"Array elemnets: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    struct minMax1 a = minmaxArray(arr, n, arr[0], arr[0]);

    cout<<"Min and Max are: " << a.min<<"  "<<a.max;
    return 0;
}