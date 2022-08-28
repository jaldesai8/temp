#include<iostream>
using namespace std;

void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool find(int arr[],int n,int k){
    
    //b.c.
    if(n==0){
        return false;
    }

    bool ans;
    if(k==arr[0]){
        return true;
    } else{
     ans = find(arr+1,n-1,k);
     return ans;
    } 
    
}

int main(){

    int arr[6] = {2,-1,3,4,10,12};
    
    int size = 6;

    int k = -1;

    printArray(arr,size);
    
    bool ans = find(arr,size,k);
    if(ans){
        cout<<"Element found";
    }
    else{
        cout<<"element not found";
    }

    return 0;
}