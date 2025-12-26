class Solution {
public:
    int strStr(string haystack, string needle) {
       for(int i=0;i<hayastack.length();i++){
        if(needl[0]==hayastack[i]){
            cout<<i<<endl;
            return i;
        }
       }
       return 1;
    }
};