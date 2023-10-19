class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        
        int i=0;
        int j=0;
        int k=0;
       double temp[]=new double[nums1.length + nums2.length];
        
        while (i<nums1.length && j<nums2.length ){
            
            if(nums1[i]<=nums2[j]){
                temp[k]=nums1[i];
                i++;
                k++;
            }else{
                temp[k]=nums2[j];
                j++;
                k++;
            }
          
            
        }
        
        while(i<nums1.length)
        {
           temp[k++]=nums1[i++];
        }
        
        while(j<nums2.length)
        {
           temp[k++]=nums2[j++];
        }
        
        int mid=((temp.length-1)+0)/2;
       double median;
        if(temp.length %  2!= 0){
            median=temp[mid];
        }else{
            median= (temp[mid] + temp[mid+1])/2;
        }
        
        return  median;
        
        
       
        
    }
}