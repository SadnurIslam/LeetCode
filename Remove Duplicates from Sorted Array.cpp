class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        int n = nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int k = s.size();
        int i =0;
        for(auto p:s){
            nums[i]=p;
            i++;
        }
        return k;
    }
};