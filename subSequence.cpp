#include<iostream>
#include<vector>
using namespace std;

void solve(string arr,string output,
            vector<string>& ans,int index){

        if(index>=arr.size()){
            if(output.length()>=1){
            ans.push_back(output);
            }
            return;
        }

        //exclude
        solve(arr,output,ans,index+1);

        //include
        char c = arr[index];
        output.push_back(c);
        solve(arr,output,ans,index+1);

}
vector<string> subSequence(string arr){

    string output = "";
    vector<string> ans;
    int index=0;
    solve(arr,output,ans,index);
    return ans;
}

int main() {
    
    string arr = "abc";

    vector<string> res= subSequence(arr);

	for (int i = 0; i < res.size(); i++) {
		
			cout << res[i] << " ";
		
	}

    return 0;
}