/*Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.*/
int trap(int* a,int n)
{
    int i,j,total=0;
    for(i=0;i<n;i++)
    {
        int lm=a[i],rm=a[i];
        for(j=0;j<i;j++)
        {
            if(lm<a[j])
            {
                lm=a[j];
            }
        }
        for(j=i+1;j<n;j++)
        {
            if(rm<a[j])
            {
                rm=a[j];
            }
        }
        if(rm<lm)
        {
            total+=rm-a[i];
        }
        else
        {
            total+=lm-a[i];
        }
    }
    return total;
}

/*!!!!!This is Brute Force Version (O(n²)) ,, TIME LIMIT EXCEEDED */