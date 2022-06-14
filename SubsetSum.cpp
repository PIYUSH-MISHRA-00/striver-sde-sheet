

void subSum(vector<int> &num,int in, int sum,vector<int> &ans){
    if(in == num.size()){
        ans.push_back(sum);
        return;
    }
        
    subSum(num,in+1,sum,ans);
    subSum(num,in+1,sum+num[in],ans);
}

vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans{};
    subSum(num,0,0,ans);
    sort(ans.begin(),ans.end());
    return ans;
}