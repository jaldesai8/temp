#include<iostream>
using  namespace std;


// string digitToWords(int n){
    
//     if(n==0){
//         return "zero";
//     }
//     if(n==1){
//         return "one";
//     }
//     if (n==2)
//     {
//         return "two";
//     }
//     if(n==3){
//         return "three";
//     }
//     if(n==4){
//         return "four";
//     }
//     if(n==5){
//         return "five";
//     }
//     if(n==6){
//         return "six";
//     }
//     if(n==7){
//         return "seven";
//     }
//     if(n==8){
//         return "Eight";
//     }
//     if(n==9){
//         return "nine";
//     }

//     string s =  digitToWords(n/10) +  digitToWords(n%10);

//     return s;
// }

// int main(){

//     int n;

//     cout<<"Enter the number"<<endl;
//     cin>>n;

//     string s;
    
//     s= digitToWords(n);

//     cout<<s;

//     return 0;
// }


//CODE - 2

void digitToWords(string arr[],int n){
     
     //b.c.
     if(n==0){
        return;
     }
       
      int digit = n%10;
      n=n/10;
    
      
    //r.r.
    digitToWords(arr,n);

     cout<<arr[digit]<<" ";
}

int main(){

    string arr[10] = { "zero","one","two","three","four","five","six","seven","eight","nine"};
    
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    
    digitToWords(arr,n);
    return 0;
}