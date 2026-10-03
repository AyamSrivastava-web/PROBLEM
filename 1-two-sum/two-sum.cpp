class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
     int n=num.size();
     map<int,int>mp;
     for(int i=0;i<n;i++){
        int remaining =target -num[i];

        if(mp.find(remaining)!=mp.end()){
            return{mp[remaining],i};
        }
        mp[num[i]]=i;
     }   return{};
    }
};