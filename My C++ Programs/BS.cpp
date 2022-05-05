#include<stdio.h>
int binarysearch(int a[],int size,int element)
{
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==element)
        {
            return mid;
        }
        if(a[mid]<element)
        {
             low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int a[]={12,23,34,45,56,67,78,89};
    int n=8;
    int element=45;
    int searchindex=binarysearch(a,n,element);
    printf("the %d element found at %d location\n",element,searchindex);
    return 0;
}