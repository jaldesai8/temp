#include<iostream>
#include<vector>
using namespace std;



int fibonacci(int n){

    

    if(n==1){
       return 0;
    }
    if(n==2){
        
        return 1;
    }
    int ans;
    ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}
int main(){
    
    
    int n;
    cout<<"Enter the term"<<endl;
    cin>>n;

    int ans = fibonacci(n);

    cout<<ans;

    return 0;
}