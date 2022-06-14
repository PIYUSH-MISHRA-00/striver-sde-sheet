string longestCommonPrefix(vector<string> &strs, int n)
{
    if(strs.size() == 1)
            return strs[0];
        
        int len = strs[0].size()-1;
        
        for(auto s:strs){
            if(len > s.size()-1)
                len = s.size()-1;
            for(int i=0;i<=len;i++)
                if(s[i] != strs[0][i]){
                    len = i-1;
                    break;  
                }
            if(len == -1)
                break;
        }
        
        if(len == -1)
            return "";
        else 
            return strs[0].substr(0,len+1);
}


