#include<iostream>
using namespace std;

int countingWays(int n){

    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }

    int ans = countingWays(n-1) + countingWays(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the nth stair"<<endl;
    cin>>n;

    int ans = countingWays(n);

    cout<<ans;

    return 0;
}