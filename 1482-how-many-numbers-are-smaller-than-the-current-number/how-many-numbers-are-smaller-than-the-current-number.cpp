class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        vector<int>ans;
        for(i=0;i<n;i++){
            int cnt=0;
            for(j=0;j<n;j++){
                if(nums[i]>nums[j]&& i!=j){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
     return ans;   
    }
};