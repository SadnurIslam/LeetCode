//10 ms

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long int y=0;
        int x1 = x;
        while(x){
            int rem = x%10;
            y=y*10+rem;
            x=x/10;
        }
        if(x1!=y)return false;
        return true;
    }
};



// 20 ms

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        vector<int>v;
        while(x){
            int rem = x%10;
            v.push_back(rem);
            x=x/10;
        }
        int n=v.size();
        for(int i=0;i<n/2;i++){
            if(v[i]!=v[n-i-1])return false;
        }
        return true;
    }
};

