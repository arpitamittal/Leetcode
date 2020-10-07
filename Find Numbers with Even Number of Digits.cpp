class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count , counter = 0, j;
    for (int i = 0; i < nums.size(); i++)
    {
        j=nums[i];
        count = 0;
        while(j != 0) 
        {
            j = j / 10;
            count++;
        }
        if (count % 2 == 0)
        {
            counter++;
        }
    }
    return counter;
    }
};