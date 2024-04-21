//Brute Force Approach

class Solution {
public:
    vector<int> twoSum(vector<int>&nums, int target) {
        int i,j;
        int n = nums.size();
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};


//Hash table approach

class Solution {
public:
    vector<int> twoSum(vector<int>&nums, int target) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m[target-nums[i]]>0){
                return {i,m[target-nums[i]]-1};
            }
            m[nums[i]]=i+1;
        }
        return {};
    }
};
