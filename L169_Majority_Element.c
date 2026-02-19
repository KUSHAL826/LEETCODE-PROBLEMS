/*
169. Majority Element

Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
 
Constraints:
n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
The input is generated such that a majority element will exist in the array.
*/
int majorityElement(int* nums, int numsSize) 
{
    int i,j,count;
    for(i=0;i<numsSize;i++)
    {
        count=1;
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
            }
        }
        if(count>(numsSize/2))
        {
            return nums[i];
        }
    }
    return -1;
}

/*
NOTE:Time Limit Exceeded
*/