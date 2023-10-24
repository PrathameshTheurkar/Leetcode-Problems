class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() > 0){
            unordered_set<int> st;

        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        // for(auto i : st){
        //     cout<<i<<" ";
        // }
        cout<<endl;
        int cnt =1 ;
        int mx = INT_MIN;
        for(auto i : st){
            if(st.find(i-1) == st.end()){
                // cout<<i<<" ";
                cnt=1;
                while(st.find(i+1) != st.end()){
                    // cout<<i<<" ";
                    i++;
                    cnt++;
                }
                // cout<<cnt<<endl;
                mx = max(mx, cnt);
            }
        }

        return mx;
        }

        return 0;
    }
};