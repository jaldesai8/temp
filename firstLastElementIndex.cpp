#include<iostream>
#include <utility>
using namespace std;

void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int last(int arr[], int s , int e , int k ){
    
    int ans=-1;
    //b.c
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;

    if(arr[mid]==k){
       last(arr,mid+1,e,k); 
       ans=mid;
    }
    else if(arr[mid]<k){
         last(arr,mid+1,e,k);
    }
    else{
        last(arr,s,mid-1,k);
    }
   return ans;
}

int  first( int arr[], int s , int e , int k ){
    
    int ans=-1;
    //b.c
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
   
    if(arr[mid]==k){
        first(arr,s,mid-1,k);
        ans=mid;
    }
    else if(arr[mid]<k){
         first(arr,mid+1,e,k);
    }
    else{
        first(arr,s,mid-1,k);
    }
   return ans;
}

int main(){

    int arr[6] = {1,2,3,8,12,12};
    
    int size = 6;

    int k = 12;

    printArray(arr,size);
    
    pair<int, int> ans;
    ans.first = first(arr,0,size-1,k);
    ans.second = last(arr,0,size-1,k);
    
    cout<<ans.first<<endl;
    cout<<ans.second;

    return 0;
}