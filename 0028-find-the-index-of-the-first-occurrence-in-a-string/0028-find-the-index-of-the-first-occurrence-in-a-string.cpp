class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)return 0;
    int m=haystack.size();
    int n= needle.size();
    for(int i=0;i<=m-n;i++){
        int j=0;
        while(j<needle.size()&&haystack[i+j]==needle[j]){
            j++;
        }
        if(j==n)return i;
    }
    return -1;
    }
};