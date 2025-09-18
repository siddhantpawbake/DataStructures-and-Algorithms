class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp="";
        int left=0,right=s.length()-1;
        while(left<=right && s[left]==' ') left++;
        while(left<=right){
            if(s[left]!=' ') {
                temp+=s[left];
            }
            else {
                if(!temp.empty()){ 
                    if(!ans.empty()) ans=temp+" "+ans;
                    else ans=temp;
                    temp="";
                }
                while(left<=right && s[left]==' ') left++;
                continue;
            }
            left++;
        }
        if(!temp.empty()){
            if(!ans.empty()) ans = temp + " " + ans;
            else ans = temp;
        }

        return ans;   
    }
};
