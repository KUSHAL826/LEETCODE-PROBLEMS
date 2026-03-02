/*
L503. Next Greater Element II
Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.
The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return -1 for this number.

Example 1:
Input: nums = [1,2,1]
Output: [2,-1,2]
Explanation: The first 1's next greater number is 2; 
The number 2 can't find next greater number. 
The second 1's next greater number needs to search circularly, which is also 2.

Example 2:
Input: nums = [1,2,3,4,3]
Output: [2,3,4,-1,4]

Constraints:
1 <= nums.length <= 104
-109 <= nums[i] <= 109
*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* nextGreaterElements(int* nums, int n, int* rs) 
{
    *rs=n;
    int i,top=-1;
    int* nge = (int*)malloc(n * sizeof(int));
    int* stack = (int*)malloc(n * sizeof(int));

    for(i=0;i<n;i++)
    {
        nge[i]=-1;
    }
    for(i=2*n-1;i>=0;i--)
    {   
        int index=i%n;
        while(top!=-1 && stack[top]<=nums[index])
        {
            top--;
        }
        if(i<n)
        {
            if(top!=-1)
            {
                nge[index]=stack[top];
            }
        }
        stack[++top]=nums[index];
    }
    free(stack);
    return nge;
}
