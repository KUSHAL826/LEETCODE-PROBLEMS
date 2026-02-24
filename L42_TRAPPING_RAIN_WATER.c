/*
L42_Trapping_Rain_Water
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

Example 1:
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

Example 2:
Input: height = [4,2,0,3,2,5]
Output: 9
 
Constraints:
n == height.length
1 <= n <= 2 * 104
0 <= height[i] <= 105
*/
int trap(int* height, int n) 
{
    int i,total=0;
    int *leftmax=(int *)malloc(n*sizeof(int));
    int *rightmax=(int *)malloc(n*sizeof(int));
    leftmax[0]=height[0];
    for(i=1;i<n;i++)
    {
        leftmax[i]=height[i]>leftmax[i-1]?height[i]:leftmax[i-1];
    }
    rightmax[n-1]=height[n-1];
    for(i=n-2;i>=0;i--){
        rightmax[i]=height[i]>rightmax[i+1]?height[i]:rightmax[i+1];
    }
    for(i=0;i<n;i++)
    {
        int minheight=leftmax[i]<rightmax[i]?leftmax[i]:rightmax[i];
        total+=minheight-height[i];
    }
    free(leftmax);
    free(rightmax);
    return total;
}
