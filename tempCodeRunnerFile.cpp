
//  void solve(vector<int>& nums, vector<vector<int>>& ans,
//                int index,vector<int> output)
//     {  
       
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
