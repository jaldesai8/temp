#include <bits/stdc++.h>
using namespace std;

void subsetsUtil(vector<int>& arr, vector<vector<int> >& ans,
				vector<int> subset, int index)
{
	//base case
	if(index>=arr.size()){
		ans.push_back(subset);
		return;
	}

	//exclude
	subsetsUtil(arr,ans,subset,index+1);

	//include
	int element = arr[index];
	subset.push_back(element);
	subsetsUtil(arr,ans,subset,index+1);

}


vector<vector<int>> subsets(vector<int>& arr)
{
	vector<int> subset;
	vector<vector<int>> ans;
	int index = 0;
	subsetsUtil(arr, ans, subset, index);

	return ans;
}


int main()
{
	
	vector<int> arr = { 1, 2, 2 };

	
	vector<vector<int> > res = subsets(arr);

	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++)
			cout << res[i][j] << " ";
		cout << endl;
	}
	

	return 0;
}
