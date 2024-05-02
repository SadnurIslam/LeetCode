class Solution {
public:
    int findMaxK(vector<int>& nums) {
        priority_queue<int>pq;
        set<int>s;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i]>0){
                pq.push(nums[i]);
            }
            else{
                s.insert(nums[i]);
            }
        }
        while(!pq.empty()){
            if(s.find(-1*pq.top())!=s.end()){
                return pq.top();
            }
            pq.pop();
        }
        return -1;
    }
};