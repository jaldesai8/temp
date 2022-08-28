#include<iostream>
using namespace std;

void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool isSortedArray(int arr[],int n){
    
    int size = n;

    if(size==0 || size==1){
        return true;
    }
    bool ans;
    if(arr[0]>arr[1]){
       return false;
    } else {
     ans = isSortedArray(arr+1,n-1);
    }
     
     return ans;
}

int main(){

    int arr[6] = {2,3,3,4,10,12};
    
    int size = 6;

    printArray(arr,size);
    cout<<"he"<<endl;
  
     bool c = isSortedArray(arr,size);
     
     if(c){
        cout<<"Array is sorted";
     }
     else{
        cout<<"Array is not sorted";
     }

    return 0;
}