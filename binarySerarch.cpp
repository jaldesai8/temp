#include<iostream>
using namespace std;

void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool bs(int arr[], int s , int e , int k ){

    //b.c
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;

    if(arr[mid]==k){
        return true;
    }

    if(arr[mid]<k){
        return bs(arr,mid+1,e,k);
    }
    else{
       return bs(arr,s,mid-1,k);
    }
}

int main(){

    int arr[6] = {2,4,6,8,10,12};
    
    int size = 6;

    int k = 2;

    printArray(arr,size);
    
    bool ans = bs(arr,0,size-1,k);
    if(ans){
        cout<<"Element found";
    }
    else{
        cout<<"element not found";
    }

    return 0;
}