class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         if(nums.size() == 2){
            int temp = nums[0];
            nums[0]=nums[1];
            nums[1]=temp;
        }
        else if(nums.size() > 1){
           int break_point=0;
           int c=0;
       
            for(int i=0;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1] ){
                break_point = i;
                // cout<<i<<endl;
                c=1;
            }
    //         // else break;
        }
        
        if(c==0){
            break_point = 0;
        }
        int mi = -1;
        int index ;
        // cout<<break_point<<endl;

        for(int i=break_point+1 ; i<nums.size();i++){
            if(nums[i] > nums[break_point] && c==1)
            {
                 mi = min(mi , nums[i]);
                 index = i;
            }

            if(c == 0){
                mi = min(mi , nums[i]);
                index = i;
            }
           
        }
        
        int temp = mi;
        int x = nums[break_point];
        nums[break_point] = nums[index];
        nums[index] = x;
        // cout<<index<<" "<<break_point<<endl;
        int start_ind = break_point + 1;
        sort(nums.begin()+start_ind , nums.end());

       }

    }
};