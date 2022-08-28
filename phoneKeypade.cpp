#include<iostream>
#include<vector>
using namespace std;


void solve(string str,vector<string>& ans,int index,string output,string mapping[]){
    
    //base condition
    if(index>=str.length()){
        ans.push_back(output);
        return;
    }

    int number = str[index] - '0';
    string value = mapping[number];

    for ( int i =0;i<value.length();i++){
        output.push_back(value[i]);
        solve(str,ans,index+1,output,mapping);
        output.pop_back();
    }
}

vector<string> combtion(string str){

    string output;
    int index =0;
    vector<string> ans;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(str,ans,index,output,mapping);
    return ans;
}

int main(){

    string str="36";

    
    
    vector<string> ans = combtion(str);

    for (int i = 0; i < ans.size(); i++) {
		
			cout << ans[i] << " ";
		
	}

    return 0;
}