//二分查找
#include <stdio.h>
#define M 100

int arr [M] = {2,3,5,6,7};//有序
int bisearch(int x,int n)
{
    int base,top,mid;
    int res;
    base = 0;
    top = n-1;
    while(top >= base)
    {
        mid = (base + top)/2;
        printf("mid:%d\n",mid);
        if (arr[mid] == x)
        {
            res = mid;
            break;
        }
        else if(arr[mid] < x)
        {
            base = mid + 1;
        }
        else top = mid - 1;
    }

    return res;
}

int main()
{
   // arr [M] = {3,6,7,5,2};
    int l = 5;
    int val = bisearch(5,l);
    printf("%d\n",val);

    return 0;
}
