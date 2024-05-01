class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int index = 0,i;
        bool found = false;
        for(i=0;i<n;i++){
            index++;
            if(word[i]==ch){
                found=true;
                break;
            }
        }
        if(!found)return word;
        string prefix = word.substr(0,index);
        string suffix = word.substr(index);
        reverse(prefix.begin(),prefix.end());
        return prefix+suffix;
    }
};



// alternative solution

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        deque<char>dq;
        bool found = false;
        for(int i=0;i<n;i++){
            if(!found){
                dq.push_front(word[i]);
            }
            else{
                dq.push_back(word[i]);
            }
            if(word[i]==ch){
                found=true;
            }
        }
        if(!found)return word;
        int i=0;
        for(auto p:dq){
            word[i]=p;
            i++;
        }
        return word;
    }
};


