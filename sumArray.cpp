#include<iostream>
using namespace std;

void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int sum(int arr[],int n){
    
    if(n==0){
        return 0;
    }
    if(n==1){
        int a = arr[0];
        return a;
    }

    int s = arr[0]+sum(arr+1,n-1);
     return s;
}

int main(){

    int arr[6] = {2,-1,3,4,10,12};
    
    int size = 6;

    printArray(arr,size);
    
    int ans = sum(arr,size);
    cout<<ans;

    return 0;
}