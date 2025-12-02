/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.*/

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) 
{
    int ir1=0,ir2=0,ir=0;
    int *res=(int *)malloc((nums1Size+nums2Size)*sizeof(int));
    while((ir1<nums1Size)&&(ir2<nums2Size))
    {
        if(nums1[ir1]<nums2[ir2])
        {
            res[ir++]=nums1[ir1++];
        }
        else(nums2[ir2]<nums1[ir1])
        {
            res[ir++]=nums2[ir2++];
        }
    }
        while(ir1<nums1Size)
        {
            res[ir++]=nums1[ir1++];
        }
        while(ir2<nums2Size)
        {
            res[ir++]=nums2[ir2++];
        }
        
        return (res[(nums1Size+nums2Size-1)/2]+res[(nums1Size+nums2Size)/2])/2.0;

}