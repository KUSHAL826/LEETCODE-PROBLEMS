/*
Second Largest Element
Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

Example 1
Input: nums = [8, 8, 7, 6, 5]
Output: 7
Explanation:
The largest value in nums is 8, the second largest is 7

Constraints
1 <= nums.length <= 105
-104 <= nums[i] <= 104
nums may contain duplicate elements.
Hints
*/

class Solution {
    public:
        int secondLargestElement(vector<int>& nums) 
        {
            int i,j,temp,n=nums.size();
            if(n<2)
            {
                return -1;
            }
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-1-i;j++)
                {
                    if(nums[j]>nums[j+1])
                    {
                        temp=nums[j];
                        nums[j]=nums[j+1];
                        nums[j+1]=temp;
                    }
                }
            }
            int sl=nums[n-2];
            for(i=n-2;i>=0;i--)
            {
                if(sl!=nums[i])
                {
                    sl=nums[i];
                    break;
                }
            }
        return sl;
        }
};