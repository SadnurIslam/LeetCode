// 1st approach

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";
        for(int j=0;j<strs[0].size();j++){
            for(int i=1;i<strs.size();i++){
                if(strs[i][j]!=strs[0][j]){
                    return str;
                }
            }
            str.push_back(strs[0][j]);
        }
        return str;

    }
};
