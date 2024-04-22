// 1st approach

class Solution {
public:
    int romanToInt(string s) {
        map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int num = 0;
        for(int i=0;i<s.size();i++){
            num+=m[s[i]];
            if(i>0 && m[s[i]]>m[s[i-1]]){
                num-=2*m[s[i-1]];
            }
        }
        return num;
    }
};
