#include<iostream>
#include<vector>
using namespace std;

void solve(string arr,vector<string>& ans,int index){

        if (index>=arr.size()){
            ans.push_back(arr);          
            return;
        }

        for(int j=index; j<arr.size();j++) {
            swap(arr[index],arr[j]);
            solve(arr,ans,index+1);
            //backtracking
            swap(arr[index],arr[j]);
        }

}
vector<string> permute(string& arr){

    vector<string> ans;
    int index=0;
    solve(arr,ans,index);
    return ans;
}

int main() {
    
    string arr = "abc";

    vector<string> res= permute(arr);

	for(int i=0; i<=res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}