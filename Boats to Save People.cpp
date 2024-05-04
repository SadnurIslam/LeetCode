class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size();
        int ans = 0;
        int i = 0, j = n-1;
        while(i<=j){
            if(people[j]+people[i]<=limit){
                i++;
            }
            j--;
            ans++;
        }
        return ans;
    }
};