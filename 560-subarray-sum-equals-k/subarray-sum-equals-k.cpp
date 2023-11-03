class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int cnt  =0;

        map<int , int> m;
        m[0]=1;
        int preSum = 0;
        for(int i=0;i<nums.size() ;i++){
            preSum += nums[i];

            int rem = preSum - k;

            cnt+=m[rem];

            m[preSum]++;
        }
        return cnt;
    }
};