#include<iostream>
#include<vector>
using namespace std;

void subsetsUtil(vector<int>& arr, vector<vector<int>> &ans,
                 vector<int> subset, int index,int n)

{
    if (index == n)
    {
        ans.push_back(subset);
        return ;
    }

    else
    {
        // Pick
        subset.push_back(arr[index]);
        subsetsUtil(arr, ans, subset, index + 1,n);
        subset.pop_back();

        // skip
        while (index + 1 < arr.size() && arr[index] == arr[index + 1])
        {
            index++;
        }
        subsetsUtil(arr, ans, subset, index + 1,n);
    }
}

vector<vector<int>> subsets(vector<int>& arr,int n)
{

    vector<int> subset;
    vector<vector<int>> ans;
    int index = 0;
    subsetsUtil(arr, ans, subset, index,n);
    return ans;
}

int main()
{

    vector<int> arr = {1, 2, 2};

    int n = arr.size();

   	vector<vector<int>> res = subsets(arr,n);
      
    
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++)
			cout << res[i][j] << " ";
		cout << endl;
	}

    

    return 0;
}

// chutiya code
//   void solve(vector<int>& nums, vector<vector<int>>& ans,
//                 int index,vector<int> output)
//      {

//         ans.push_back(output);

//         for(int i =index; i<nums.size(); i++){

//             if( i != index && nums[i]==nums[i-1])
//                 continue;
//             output.push_back(nums[i]);
//             solve(nums,ans,index+1,output);
//             output.pop_back();
//         }
//     }
// public:
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         vector<vector<int>> ans;
//         int index = 0;
//         vector<int> output;
//         sort(nums.begin(),nums.end());
//         solve(nums,ans,index,output);
//         return ans;
//     }
