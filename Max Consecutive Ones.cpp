
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,len,n;
        len=nums.size();
        if(len==0)
            return 0;
        for(int i=0;i<len;i++){
            if(nums[i]==1){
                count++;
               if(n<count)
                n=count;
               }
            
            
             else
                count=0;
        }
        return n;
    } 
};