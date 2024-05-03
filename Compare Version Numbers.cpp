class Solution {
public:
    int compareVersion(string version1, string version2) {
        string s1[251],s2[251];
        s1[0]="";s2[0]="";
        int j1=0,j2=0;
        for(int i=0;i<version1.size();i++){
            if(version1[i]=='.'){
                j1++;
                s1[j1]="";
            }
            else{
                s1[j1].push_back(version1[i]);
            }
        }
        for(int i=0;i<version2.size();i++){
            if(version2[i]=='.'){
                j2++;
                s2[j2]="";
            }
            else{
                s2[j2].push_back(version2[i]);
            }
        }
        for(int i=0;i<=min(j1,j2);i++){
            int a=stoi(s1[i]);
            int b = stoi(s2[i]);
            if(a>b)return 1;
            if(a<b)return -1;
        }
        if(j1>j2){
            for(int i=j2+1;i<=j1;i++){
                int a=stoi(s1[i]);
                if(a!=0)return 1;
            }
        }
        else{
            for(int i=j1+1;i<=j2;i++){
                int a=stoi(s2[i]);
                if(a!=0)return -1;
            }
        }
        return 0;
    }
};