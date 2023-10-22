class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         
         vector<int> ans;
         if(nums.size() == 0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
         }
       int i=0;
       int j=nums.size()-1;

        while(i != j && i < j){
            int mid = (i+j)/2;

            if(nums[mid] >= target){
               j = mid;
            }else if(nums[mid] < target){
               i = mid + 1;
            }
        }

        if(nums[j] == target)
        ans.push_back(j);
        else ans.push_back(-1);

        i=0;
        j=nums.size()-1;

        while( i < j ){
           int mid = i + (((j-i)+1)/2);

           if(nums[mid] > target){
              j = mid -1;
           }else if(nums[mid] <= target){
              i = mid;
   
           }
        }
        if(ans.front() != -1)
        ans.push_back(i);
        else ans.push_back(-1);

       return ans;

    }
};