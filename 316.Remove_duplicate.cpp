class Solution {
public:
    string removeDuplicateLetters(string s) {
 for(int i=0;i<s.size();i++)
 {for(int j=i+1;j<s.size();j++)
         if(s[i]==s[j])
             s.erase(s.begin()+i);
 }
        for(int i=0;i<s.size();i++)
 {for(int j=i+1;j<s.size();j++)
         if(s[i]==s[j])
             s.erase(s.begin()+i);
 }
        return s;
    }
};
 
