#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	unordered_map<int,int> mp;
    
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    
    int mx = INT_MIN, ele{};
    
    for(auto a:mp){
        if(a.second > mx){
            mx = a.second;
            ele = a.first;
        }
    }
    
    if(mx > n/2)
        return ele;
    return -1;
}