#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> pascalTri;
        pascalTri.push_back({1});
        
        for(int i=1;i<n;i++){
            vector<long long int> sol{1};
            
            for(int j=1;j<i;j++){
                long long int ele = pascalTri[i-1][j-1] + pascalTri[i-1][j];
                sol.push_back(ele);
            }
            
            sol.push_back(1);
            pascalTri.push_back(sol);
        }
        
        return pascalTri;
}
